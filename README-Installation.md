## Install Drupal decoupled CMS

### Quick installation
There is a fully functional DB available in this template, which contains all important settings for a decoupled backend
including some test data. Follow these instructions for a quick install:

1. Copy this folder "xy8_Backend", rename it and set the folder [new-project]/public_html as document root in MAMP (Apache Server)

2) IMPORTANT! Delete the .git folder in this folder (xy8_Backend)

3) Create a new DB in local phpMyAdmin with a unique name dp8_[ProjectName] 

4) Import DB-Backup found in folder private_files/backup_migrate/xy8_dbbackup-....mysql.gz into new DB (see phpMyAdmin).

5) Update the .env and .env.local files with the new database settings (MYSQL_DATABASE, MYSQL_USER, MYSQL_PASSWORD)

6) Set private files directory  
      a) Create folder ../private_files  
      b) add .htaccess file

7) Set Trusted hosts patterns ìn settings.php 
```php
      $settings['trusted_host_patterns'] = array(  
        '^example\.com$',
        '^.+\.example\.com$',   
        '^.+\.localtunnel\.me$',  
        '^localhost$',  
      );
```

8) Update Drupal, all modules and the db:
```php
composer update
drush updatedb
drush cr
```
9) You are good to go, enter http://localhost and read about decoupled Drupal...

### New installation
If you want to install a new database from scratch, follow this instructions:

1. Copy this folder "xy8_pxl_backend", rename it and set the folder [new-project]/public_html as root in MAMP

2. Run script to create Instance:
	composer run-script install:with-mysql or browse to http://localhost and follow instructions.

3. Create or adapt .env and .env.local files with the new databse settings (see predefined values)


