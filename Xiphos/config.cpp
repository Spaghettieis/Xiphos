class CfgPatches
{
	class Xiphos
	{
		units[] = {"Xiphos", "Machete"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Melee"};
	};
};
class CfgMods
{
	class Xiphos
	{
		dir = "Xiphos";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Xiphos";
		credits = "ZachWilkings1997";
		author = "Spaghettieis";
		authorID = "76561199363100280";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World", "Game"};
		class defs
		{
			class worldScriptModule
			{
				files[] = {"Xiphos/scripts/4_World/"};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Machete;
	class seis_Xiphos_base: Machete
	{
		scope = 2;
		displayName = "Xiphos";
		descriptionShort = "The xiphos is a double-edged, one-handed shortsword used by the ancient Greeks. Centuries after it was made, it´s barely better than a machete.";
		model = "Xiphos\data\xiphos.p3d";
		inventorySlot[] = {"Melee"};
		rotationFlags=12;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Xiphos\data\xiphos_co.paa"
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSharpLight_3";
				range=1.4;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_3";
				range=1.4;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_3";
				range=3.3;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Xiphos\data\xiphos.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Xiphos\data\xiphos.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Xiphos\data\xiphos_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Xiphos\data\xiphos_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Xiphos\data\xiphos_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		
	};
	class seis_Xiphos_bestblade: seis_Xiphos_base
	{
		descriptionShort = "This one-handed shortsword is still as sharp as it was when used by the ancient Greeks to defend their homes. - Molon labe -";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSharpLight_5";
				range=1.4;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_5";
				range=1.4;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_5";
				range=3.2;
			};
		};		
	};
	class seis_Xiphos_vorpal: seis_Xiphos_base
	{
		descriptionShort = "This ancient greek shortsword hums with power. Use it against your enemies. - Sing, O Muse, of the rage of Achilles the murderer, fated to die, sing of the rage that cost the Achaeans so many good men. - ";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeVorpalLight";
				range=1.4;
			};
			class Heavy
			{
				ammo="MeleeVorpalHeavy";
				range=1.4;
			};
			class Sprint
			{
				ammo="MeleeVorpalHeavy";
				range=3.2;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
				};
			};
		};
	};

};
class CfgAmmo
{
	class MeleeSharpLight_4;
	class MeleeVorpalLight: MeleeSharpLight_4
	{
		affectSkeleton = 1.4;
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 1;
			class Health
			{
				damage = 1000;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
			};
		};
	};
	class MeleeVorpalHeavy: MeleeSharpLight_4
	{
		affectSkeleton = 1.4;
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 1;
			class Health
			{
				damage = 2000;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
			};
		};
	};
};