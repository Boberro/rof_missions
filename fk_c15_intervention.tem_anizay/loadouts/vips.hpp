class baseMan {// Weaponless baseclass
    displayName = "VIP";
    // All randomized.
    uniform[] = {};
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
    goggles[] = {};
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
    items[] =
    {
        LIST_4("ACE_fieldDressing"),
        LIST_2("ACE_morphine"),
        LIST_1("ACE_epinephrine")
    };
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";

    // Traits https://community.bistudio.com/wiki/setUnitTrait
    traits[] = {};
};
class car : baseMan
{
    displayName = "Takistani VIP";
    goggles[] = {"G_Aviator"};
    uniform[] = {"U_Afghan05"};
    vest[] = {"gm_pl_army_vest_80_rig_gry"};
    primaryWeapon[] = {"rhs_weap_akms"};
    silencer[] = {"rhs_acc_dtkakm"};
    sidearmWeapon[] = {"hgun_Pistol_heavy_02_Yorris_F"};
    magazines[] = {
        "rhs_75Rnd_762x39mm_89",
        "6Rnd_45ACP_Cylinder"
    };
};
class r : baseMan
{
    displayName = "TLA VIP";
    faces[] = {"faceset:african"};
    goggles[] = {"murshun_cigs_cig3"};
    uniform[] = {"rhsgref_uniform_TLA_2"};
    headgear[] = {"H_Hat_Safari_sand_F"};
    vest[] = {"rhs_6sh46"};
    sidearmWeapon[] = {"rhs_weap_savz61_folded"};
    magazines[] = {
        LIST_5("rhsgref_20rnd_765x17_vz61")
    };
};