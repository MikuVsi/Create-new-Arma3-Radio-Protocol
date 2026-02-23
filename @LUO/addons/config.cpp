class CfgPatches
{
class LUO_Voice
{
author="LuoTianyi";
name="Luotianyi Radio Protocol";
url="https://space.bilibili.com/65578239";
units[] = {"LUO"};
weapons[] = {};
requiredAddons[] = 
{
	"A3_Dubbing_Radio_F_EXP",
	"A3_Data_F",
	"A3_Characters_F_Proxies",
	"A3_Characters_F_Common"
};
requiredVersion=1.0;
};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class LUO: B_Soldier_base_F
	{
		_generalMacro="LUO";
		displayname="LUO";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		cost=20;
		author="Luotianyi";
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		identityTypes[]=
		{
			"LUO"
		};
	};
};
class CfgIdentities
{
class LUO
{
face = "Default";
glasses = "None";
name = "LuoTianyi";
nameSound = "";
pitch = 1.0;
speaker = "LUOCHI";
};
};

class CfgVoice
{
voices[]+={"LUOCHI"};
micOuts[] = {"micOut1","micOut2","micOut3","micOut4","micOut5","micOut6"};
preview="LUO\sound\RadioProtocolCHI\Normal\100_Commands\Advance.ogg";
default = "LUOCHI";

class ENG;
class LUOCHI: ENG
{
protocol = "RadioProtocolCHI";
directories[]={"\LUO\sound\","\LUO\sound\"};
icon="\a3\Ui_f\data\Map\Markers\Flags\viper_ca.paa";

identityTypes[]={"LUO"};
scope = 2;
displayName = "FemaleLUOCHI";
author = "LuoTianyi";
};
};
class CfgVoiceTypes
{
	delete NoVoice;
	class LUOCHI
	{
		name="LUO";
		voices[]=
		{
			"LUOCHI",
		};
		preview="LUOCHI";
		alternative="";
	};
};