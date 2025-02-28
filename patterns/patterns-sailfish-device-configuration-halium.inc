%package -n patterns-sailfish-device-configuration-halium
Summary: Sailfish Configuration Halium

Requires: patterns-sailfish-device-configuration-common-halium
Requires: patterns-sailfish-device-adaptation-halium

Requires: patterns-sailfish-cellular-apps
Requires: patterns-sailfish-applications
Requires: patterns-sailfish-ui

# Early stages of porting benefit from these:
#Requires: sailfish-porter-tools
Requires: jolla-developer-mode
Requires: sailfishsilica-qt5-demos
Requires: busybox-static
Requires: net-tools
Requires: openssh-clients
Requires: openssh-server
Requires: vim-enhanced
Requires: zypper
Requires: strace

# jolla-rnd-device will enable usb-moded even when UI is not yet
# brought up (useful during development, available since update10)
Requires: jolla-rnd-device
#End sailfish-porter-tools

# Jolla Store Items
Requires: patterns-sailfish-consumer-generic
Requires: patterns-sailfish-store-applications

Requires: sailfish-content-graphics-z1.5
Requires: jolla-settings-accounts-extensions-3rd-party-all

# For Mozilla location services (online)
Requires: geoclue-provider-mlsdb

# Sailfish OS CSD tool for hardware testing
Requires: csd

# KMod required for kmod-static-nodes.service 
Requires: kmod

%description -n patterns-sailfish-device-configuration-halium
Pattern with packages for halium configurations

%files -n patterns-sailfish-device-configuration-halium
