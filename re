local OrionLib = loadstring(game:HttpGet(('https://raw.githubusercontent.com/shlexware/Orion/main/source')))()
local Window = OrionLib:MakeWindow({Name = "Sharkbite 2", HidePremium = false, IntroEnabled = false, ConfigFolder = "SB2Mod"})

local BoatTab = Window:MakeTab({
	Name = "Free Boats",
	Icon = "rbxassetid://4483345998",
	PremiumOnly = false
})

local BoatSection = BoatTab:AddSection({
	Name = "Boat Options"
})


BoatSection:AddDropdown({
	Name = "Select your Free Boat",
	Default = "1",
	Options = {"DuckyBoatBeta", "DuckyBoat", "Titanic", "HMHSBritannic", "BlueCanopyMotorboat", "BlueWoodenMotorboat", "UnicornBoat", "Jetski", "RedMarlin", "Sloop", "TugBoat", "SmallDinghyMotorboat", "JetskiDonut", "Marlin", "TubeBoat", "FishingBoat", "VikingShip", "SmallWoodenSailboat", "RedCanopyMotorboat", "Catamaran", "CombatBoat", "TourBoat", "Duckmarine", "PartyBoat", "MilitarySubmarine",  "GingerbreadSteamBoat", "Sleigh2022", "Snowmobile", "CruiseShip", "Wildfire"},
	Callback = function(Value)
local ohString1 = (Value)

game:GetService("ReplicatedStorage").EventsFolder.BoatSelection.UpdateHostBoat:FireServer(ohString1)
	end    
})
