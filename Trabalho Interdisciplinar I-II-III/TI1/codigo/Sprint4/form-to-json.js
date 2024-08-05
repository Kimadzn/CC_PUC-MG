"use strict";

jQuery(
  (function ($) {
    $.fn.formToJson = function (resultContainer) {
      const form = this;

      let submittedData = [];

      let formData = {
        id: Number,
        username: String,
        cpf: String,
        telefone: String,
        senha: Number,
      };
      let jsonOutputData = Object.create(formData);

      $(form).submit(function (event) {
        event.preventDefault();

        sortData($(form).serialize());

        jsonData();

        outputData();

        resetData();
      });

      function sortData(data) {
        if (data != undefined) {
          const regxSpace = /(?:%20)/gi;
          const regxEmail = /(?:%40)/gi;
          const regxLineBreak = /(?:%0D%0A)/gi;

          let sortedData = data
            .replace(regxSpace, " ")
            .replace(regxEmail, "@")
            .replace(regxLineBreak, "\n")
            .split("&");

          $(sortedData).each(function (index, element) {
            submittedData.push(element.split("="));
          });
        }
      }

      function jsonData() {
        if (submittedData != undefined || submittedData != null) {
          $(submittedData)
            .promise()
            .done(function () {
              jsonOutputData.id = 1;
              jsonOutputData.username = submittedData[0][1];
              jsonOutputData.cpf = submittedData[1][1];
              jsonOutputData.telefone = submittedData[2][1];
              jsonOutputData.senha = submittedData[3][1];
            });
        }
      }

      function outputData() {
        window.location.href = `login.html`;

        let stringifyJsonData = JSON.stringify(jsonOutputData);

        if (resultContainer !== undefined || resultContainer !== null) {
          $(jsonOutputData)
            .promise()
            .done(function () {
              $(resultContainer).html(stringifyJsonData);

              console.log(stringifyJsonData);
            });
        } else {
          console.log("resultContainer undefined");
          return stringifyJsonData;
        }
      }

      function resetData() {
        submittedData = [];
        jsonOutputData = {};
      }
    };
  })(jQuery)
);
