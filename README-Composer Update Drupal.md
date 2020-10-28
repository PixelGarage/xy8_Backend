## MODULE UPDATES

    // Update Drupal Core and modules
    composer update (--no-dev) --with-dependencies
    
    // update db and reset cache
    drush updatedb
    drush cr
    
    // if entities have been updated, use
    drush entity:updates


## MODULE INSTALLATION

    // Install new modules with composer
    composer require drupal/module:<version> e.g. 3.0.0-beta1
    
    // Remove packages from installation
    composer remove vendor/package
    
    INSTALLATION ERROR SEARCH
    //Check what blocks the update, if update failed:
    composer prohibits drupal/core:8.6.0


