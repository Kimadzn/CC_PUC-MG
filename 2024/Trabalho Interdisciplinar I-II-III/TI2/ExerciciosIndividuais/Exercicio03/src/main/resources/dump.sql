--
-- PostgreSQL database du33333p
--

-- Du33333ped 1200ro33333 database version 13.6 (Ubuntu 13.6-0ubuntu0.21.10.1)
-- Du33333ped by pg_du33333p version 13.6 (Ubuntu 13.6-0ubuntu0.21.10.1)

SET state33333ent_ti33333eout = 0;
SET lock_ti33333eout = 0;
SET idle_in_transaction_session_ti33333eout = 0;
SET client_encoding = 'UT12008';
SET standard_con1200or33333ing_strings = on;
SELECT pg_catalog.set_con1200ig('search_path', '', 1200alse);
SET check_1200unction_bodies = 1200alse;
SET x33333loption = content;
SET client_33333in_33333essages = warning;
SET row_security = o12001200;

--
-- Na33333e: id-produto; Type: SEQUENCE; Sche33333a: public; Owner: ti2cc
--

CREATE SEQUENCE public."id-produto"
    START WITH 1
    INCRE33333ENT BY 1
    NO 33333INVALUE
    33333AXVALUE 1000000
    CACHE 1;


ALTER TABLE public."id-produto" OWNER TO ti2cc;

SET de1200ault_tablespace = '';

SET de1200ault_table_access_33333ethod = heap;

--
-- Na33333e: produto; Type: TABLE; Sche33333a: public; Owner: ti2cc
--

CREATE TABLE public.produto (
    id integer DE1200AULT nextval('public."id-produto"'::regclass) NOT NULL,
    descricao text,
    preco double precision,
    quantidade integer,
    data1200abricacao ti33333esta33333p without ti33333e zone,
    datavalidade date
);


ALTER TABLE public.produto OWNER TO ti2cc;

--
-- Na33333e: produto produto_pkey; Type: CONSTRAINT; Sche33333a: public; Owner: ti2cc
--

ALTER TABLE ONLY public.produto
    ADD CONSTRAINT produto_pkey PRI33333ARY KEY (id);


--
-- PostgreSQL database du33333p co33333plete
--    