# open_data_schema_map_nkod
Pod-modul Drupalového modulu [open_data_schema_map](https://github.com/NuCivic/open_data_schema_map) popisující schéma, které je kompatibilní s [Národním katalogem otevřených dat (NKOD)](https://portal.gov.cz/portal/rejstriky/data/97898/).

## Instalace
1. V Structure -> Content types -> Dataset -> Manage fields je třeba přidat chybějící (případně upravit stávající) pole pro datovou sadu dle [požadavků NKOD](http://opendata.gov.cz/nastroj:ckan-api), případně odebrat nepotřebná a upravit pořadí
2. V Structure -> Content types -> Resource -> Manage fields je třeba přidat chybějící (případně upravit stávající) pole pro datový zdroj dle [požadavků NKOD](http://opendata.gov.cz/nastroj:ckan-api), případně odebrat nepotřebná a upravit pořadí
3. Modul nakopírujeme do adresáře `modules`
4. V menu 'Modules' zapneme `NKOD Schema`
5. Přejít do Nastavení (Configuration) -> Webové služby (Web services) -> Open Data Schema Mapper 
6. Vypnout CKAN Package Show API (edit, odškrtnout `Enabled`)
7. Upravit NKOD package_show a k zobrazeným položkám ze schématu přiřadit pole z bodu 1. a 2.
