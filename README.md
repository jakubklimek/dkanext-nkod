# Rozšíření DKAN pro kompatibilitu s NKOD
Tento Drupal modul je rozšířením pro katalog [DKAN](https://github.com/nucivic/dkan-drops-7) zajišťující kompatibilitu [API lokálního katalogu](http://opendata.gov.cz/nastroj:ckan-api) pro harvestování do [Národního katalogu otevřených dat (NKOD)](http://data.gov.cz).

## Instalace
1. Nakopírujte soubory modulu do DKAN (Drupal 7) instalace, např. `/var/www/sites/all/modules/dkanext-nkod'
2. V menu 'Modules' zapněte `NKOD extension`

## Poznámky
- Úspěšnou instalaci ověříte tím, že na obrazovce pro přidání datasetu jsou položky [vyžadované NKOD](http://opendata.gov.cz/nastroj:ckan-api)
- Také ověřte, že po kliknutí na "JSON" vidíte JSON soubor odpovdající [požadavkům NKOD](http://opendata.gov.cz/nastroj:ckan-api)
- Pokud API nefunguje, zkuste vypnout původní CKAN package_show API v Nastavení (Configuration) -> Webové služby (Web services) -> Open Data Schema Mapper a ověřte, že je zde zapnuto NKOD package_show API
