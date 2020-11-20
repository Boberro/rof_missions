class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "U_BG_Guerilla2_1"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
    goggles[] = {"G_WirelessEarpiece_F"};
    hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.

    // All randomized
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    // Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {};
    sidearmAttachments[] = {};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = {};
    items[] = {"FirstAidKit"};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {

    };

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};

class guard_r : baseMan
{
    displayName = "Guard (rifle)";
    headgear[] = {"H_Cap_blk"};
    vest[] = {"V_PlateCarrier1_blk"};

    primaryWeapon[] = {"rhs_weap_g36c"};
    scope[] = {"rhsusf_acc_eotech_552"};
    attachment[] = {"rhsusf_acc_wmx_bk"};

    sidearmWeapon[] = {"rhsusf_weap_m9"};

    magazines[] =
    {
        LIST_7("rhssaf_30rnd_556x45_EPR_G36"),
        LIST_2("rhsusf_mag_15Rnd_9x19_JHP"),
        LIST_2("rhs_mag_an_m8hc")
    };
    items[] =
    {
        LIST_2("FirstAidKit")
    };

    code = "_this enableGunLights ""forceOn""";
};
class guard_s : baseMan
{
    displayName = "Guard (shotgun)";
    headgear[] = {"H_Cap_blk"};
    vest[] = {"V_PlateCarrier1_blk"};

    primaryWeapon[] = {"rhs_weap_M590_5RD"};

    sidearmWeapon[] = {"rhsusf_weap_m9"};

    magazines[] =
    {
        LIST_12("rhsusf_5Rnd_Slug"),
        LIST_2("rhsusf_mag_15Rnd_9x19_JHP"),
        LIST_2("rhs_mag_an_m8hc")
    };
    items[] =
    {
        LIST_2("FirstAidKit")
    };
};

class bodyguard : baseMan
{
    displayName = "Bodyguard";
    uniform[] = {"rds_uniform_Functionary1"};
    vest[] = {"rds_pistol_holster"};
    headgear[] = {"H_WirelessEarpiece_F"};
    goggles[] = {"G_Aviator"};
    
    sidearmWeapon[] = {"rhsusf_weap_m9"};

    magazines[] =
    {
        LIST_3("rhsusf_mag_15Rnd_9x19_JHP"),
        LIST_1("rhs_mag_an_m8hc")
    };
    items[] =
    {
        LIST_1("FirstAidKit")
    };
};

class swat_mp5 : baseMan
{
    displayName = "SWAT (MP5)";
    uniform[] = {"U_B_GEN_Soldier_F"};
    headgear[] = {"rhsusf_protech_helmet_rhino"};
    vest[] = {"V_TacVest_blk_POLICE"};
    goggles[] = {"rhsusf_oakley_goggles_clr"};
    hmd[] = {"rhsusf_ANPVS_15"};

    primaryWeapon[] = {"SMG_05_F"};
    scope[] = {"rhsusf_acc_eotech_xps3"};
    attachment[] = {"acc_pointer_IR"};
    silencer[] = {"muzzle_snds_L"};

    magazines[] =
    {
        LIST_7("30Rnd_9x21_Mag_SMG_02_Tracer_Red"),
        LIST_2("rhs_mag_mk3a2"),
        LIST_2("rhs_mag_an_m8hc")
    };
    items[] =
    {
        LIST_2("FirstAidKit")
    };

    code = "_this enableIRLasers true";
};
class swat_rifle : baseMan
{
    displayName = "SWAT (rifle)";
    uniform[] = {"U_B_GEN_Soldier_F"};
    headgear[] = {"rhsusf_protech_helmet_rhino"};
    vest[] = {"V_TacVest_blk_POLICE"};
    goggles[] = {"rhsusf_oakley_goggles_clr"};
    hmd[] = {"rhsusf_ANPVS_15"};

    primaryWeapon[] = {"rhs_weap_m4_carryhandle"};
    attachment[] = {"acc_pointer_IR"};

    magazines[] =
    {
        LIST_7("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
        LIST_2("rhs_mag_mk3a2"),
        LIST_2("rhs_mag_an_m8hc")
    };
    items[] =
    {
        LIST_2("FirstAidKit")
    };

    code = "_this enableIRLasers true";
};