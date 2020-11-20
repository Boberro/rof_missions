class baseMan {// Weaponless baseclass
    displayName = "Cowboy Base";
    // All randomized.
    uniform[] =
    {
        "U_BG_Guerilla2_2",
        "U_BG_Guerilla2_1",
        "U_BG_Guerilla2_3",
        "U_Competitor",
        "U_C_Poloshirt_tricolour",
        "U_C_Poloshirt_salmon",
        "U_C_Poloshirt_blue",
        "U_C_Man_casual_3_F",
        "U_I_C_Soldier_Bandit_3_F",
        "U_I_C_Soldier_Bandit_2_F",
        "U_C_Poor_1",
        "U_I_G_Story_Protagonist_F",
        "U_C_Man_casual_4_F",
        "U_C_Man_casual_6_F",
        "U_Rangemaster",
        "U_BG_leader"
    };
    vest[] = {
        "V_PlateCarrier2_rgr_noflag_F"
    }; 
    backpack[] = {
        "rhssaf_kitbag_smb"
    };
    headgear[] = {
        "H_Hat_blue",
        "H_Hat_brown",
        "H_Hat_checker",
        "H_Hat_grey",
        "H_Hat_tan",
        "rhs_fieldcap_khk",
        "H_Cap_marshal",
        "rhsgref_bcap_specter",
        "H_Watchcap_blk",
        "H_Watchcap_camo",
        "H_Watchcap_khk",
        "H_Booniehat_khk",
        "H_Booniehat_mcamo",
        "H_Booniehat_oli",
        "H_Booniehat_tan",
        "H_Booniehat_tna_F",
        "H_Cap_grn_BI",
        "H_Cap_blk",
        "H_Cap_blu",
        "H_Cap_blk_CMMG",
        "H_Cap_grn",
        "H_Cap_oli",
        "H_Cap_press",
        "H_Cap_surfer",
        "H_Cap_khaki_specops_UK",
        "H_Cap_blk_Raven",
        "rhsgref_fieldcap_ttsko_digi"
    };
    goggles[] = {
        "G_Spectacles_Tinted",
        "G_Spectacles_Tinted",
        "G_Spectacles_Tinted",
        "G_Spectacles_Tinted",
        "G_Spectacles_Tinted",
        "G_Spectacles_Tinted",
        "G_Spectacles_Tinted",
        "G_Spectacles_Tinted",
        "G_Spectacles_Tinted",
        "G_Spectacles_Tinted",
        "G_Spectacles_Tinted",
        "G_Spectacles_Tinted",
        "G_Spectacles_Tinted",
        "G_Spectacles_Tinted",
        "G_Spectacles_Tinted",
        "G_Spectacles_Tinted",
        "G_Spectacles_Tinted",
        "G_Spectacles_Tinted",
        "murshun_cigs_cig4",
        "murshun_cigs_cig3",
        "murshun_cigs_cig2",
        "murshun_cigs_cig1",
        "murshun_cigs_cig0",
        "immersion_pops_pop0",
        "immersion_pops_pop0",
        "immersion_pops_pop0",
        "immersion_pops_pop0",
        "immersion_pops_pop0"
    };
    hmd[] = {};

    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    // Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {"hgun_ACPC2_F"};
    sidearmAttachments[] = {};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = {
        LIST_2("9Rnd_45ACP_Mag")
    };
    items[] = {
        LIST_4("ACE_fieldDressing"),
        LIST_2("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_1("ACE_salineIV_500")
    };
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
class r : baseMan
{
    displayName = "Cowboy Riflist";
    primaryWeapon[] = {"rhs_weap_mk18_bk","rhs_weap_m4a1_blockII_bk","rhs_weap_hk416d145"};
    silencer[] = {"rhsusf_acc_rotex5_grey"};
    scope[] = {"rhs_acc_1p87"};
    attachment[] = {"rhs_acc_2dpZenit_ris"};
    magazines[] +=
    {
        LIST_10("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
        LIST_1("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};

class r2 : baseMan
{
    displayName = "Cowboy Funshot";
    primaryWeapon[] = {"rhs_weap_M590_8RD"};
    magazines[] +=
    {
        LIST_12("rhsusf_8Rnd_00Buck"),
        LIST_1("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};

class m : r
{
    displayName = "Cutter";
    vest[] = {"V_PlateCarrierIA1_dgtl"};
    headgear[] = {"rhsusf_patrolcap_ocp","rhsusf_patrolcap_ucp"};
    backpack[] = {"usm_pack_alice"};
    backpackItems[] += {
        LIST_1("ACE_surgicalKit"),
        LIST_1("ACE_personalAidKit"),
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_salineIV_500")
    };
    magazines[] +=
    {
        LIST_10("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
        LIST_2("rhs_mag_an_m8hc")
    };
    items[] = {};
};

class ar : baseMan 
{
    displayName = "Cowboy Auto Rifleman";
    primaryWeapon[] = {"LMG_03_F"};
    silencer[] = {"muzzle_snds_M"};
    scope[] = {"rhs_acc_1p87"};
    attachment[] = {"rhs_acc_2dpZenit_ris"};
    magazines[] +=
    {
        LIST_6("200Rnd_556x45_Box_F"),
        LIST_2("rhs_mag_an_m8hc")
    };
    // items[] = {};
};

class ftl : r
{
    displayName = "Boss";
    uniform[] = {"U_BG_leader"};
    headgear[] = {"H_StrawHat"};
    vest[] = {"V_PlateCarrierIA2_dgtl"};
    linkedItems[] += {"Binocular","ItemGPS"};
    // backpack[] = {};
};

class dm : baseMan
{
    displayName = "Shooter";
    uniform[] = {"U_BG_Guerilla3_1"};
    vest[] = {"rhs_vest_pistol_holster"};
    primaryWeapon[] = {"rhs_weap_sr25"};
    // scope[] = {"optic_LRPS"};
    scope[] = {"optic_DMS"};
    silencer[] = {""};
    bipod[] = {"rhs_acc_harris_swivel"};
    magazines[] +=
    {
        "rhsusf_acc_SR25S",
        LIST_10("rhsusf_20Rnd_762x51_m993_Mag")
    };
    linkedItems[] += {"Binocular"};
};

class p : baseMan
{
    displayName = "Flyman";
    uniform[] = {"U_Rangemaster"};
    headgear[] = {"H_Cap_headphones"};
    backpack[] = {};
    vest[] = {"V_Rangemaster_belt"};
    linkedItems[] += {"Binocular","ItemGPS"};
};