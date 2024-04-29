local ThunderScreen = Instance.new("ScreenGui")
	local ThunderToggleUI = Instance.new("TextButton")
	local ThunderCornerUI = Instance.new("UICorner")
	local ThunderImageUI = Instance.new("ImageLabel")
	local ThunderImageUI = Instance.new("ImageLabel")
	
	        ThunderScreen.Name = "ThunderScreen"
	        ThunderScreen.Parent = game.CoreGui
	        ThunderScreen.ZIndexBehavior = Enum.ZIndexBehavior.Sibling
	
	        ThunderToggleUI.Name = "ThunderToggleUI"
	        ThunderToggleUI.Parent = ThunderScreen
	        ThunderToggleUI.BackgroundColor3 = Color3.fromRGB(31,31,31)
	        ThunderToggleUI.BorderSizePixel = 0
	        ThunderToggleUI.Position = UDim2.new(0.120833337, 0, 0.0952890813, 0)
	        ThunderToggleUI.Size = UDim2.new(0, 50, 0, 50)
	        ThunderToggleUI.Font = Enum.Font.SourceSans
	        ThunderToggleUI.Text = ""
	        ThunderToggleUI.TextColor3 = Color3.fromRGB(0, 0, 0)
	        ThunderToggleUI.TextSize = 14.000
	        ThunderToggleUI.Draggable = true
	        ThunderToggleUI.MouseButton1Click:Connect(function()
	        game:GetService("VirtualInputManager"):SendKeyEvent(true,305,false,game)
	        game:GetService("VirtualInputManager"):SendKeyEvent(false,305,false,game)
	        end)
	        ThunderCornerUI.Name = "ThunderCornerUI"
	        ThunderCornerUI.Parent = ThunderToggleUI
	        ThunderImageUI.Name = "MODILEMAGE"
	        ThunderImageUI.Parent = ThunderToggleUI
	        ThunderImageUI.BackgroundColor3 = Color3.fromRGB(192,192,192)
	        ThunderImageUI.BackgroundTransparency = 1.000
	        ThunderImageUI.BorderSizePixel = 0
	        ThunderImageUI.Position = UDim2.new(0.0, 0, 0.0, 0)
	        ThunderImageUI.Size = UDim2.new(0, 50, 0, 50)
	        ThunderImageUI.Image = "http://www.roblox.com/asset/?id=13717478897"
	
	 local UserInputService = game:GetService("UserInputService")
	 local TweenService = game:GetService("TweenService")
	 
	 local function MakeDraggable(topbarobject, object)
	 local Dragging = nil
	 local DragInput = nil
	 local DragStart = nil
	 local StartPosition = nil
	 
	 local function Update(input)
	 local Delta = input.Position - DragStart
	 local pos = UDim2.new(StartPosition.X.Scale, StartPosition.X.Offset + Delta.X, StartPosition.Y.Scale, StartPosition.Y.Offset + Delta.Y)
	 local Tween = TweenService:Create(object, TweenInfo.new(0.15), {
	  Position = pos
	 })
	 Tween:Play()
	 end
	 
	 topbarobject.InputBegan:Connect(
	  function(input)
	  if input.UserInputType == Enum.UserInputType.MouseButton1 or input.UserInputType == Enum.UserInputType.Touch then
	  Dragging = true
	  DragStart = input.Position
	  StartPosition = object.Position
	 
	  input.Changed:Connect(
	   function()
	   if input.UserInputState == Enum.UserInputState.End then
	   Dragging = false
	   end
	   end
	  )
	  end
	  end
	 )
	 
	 topbarobject.InputChanged:Connect(
	  function(input)
	  if
	   input.UserInputType == Enum.UserInputType.MouseMovement or
	  input.UserInputType == Enum.UserInputType.Touch
	  then
	  DragInput = input
	  end
	  end
	 )
	 
	 UserInputService.InputChanged:Connect(
	  function(input)
	  if input == DragInput and Dragging then
	  Update(input)
	  end
	  end
	 )
	 end
	 _G.BGColor_1 = Color3.fromRGB(30,30,30)
	 _G.BGColor_2 = Color3.fromRGB(20, 20, 20)
	 _G.Color = Color3.fromRGB(224,224,224)
	 _G.WindowBackgroundColor = Color3.fromRGB(12,12,12)
	 _G.BackgroundItemColor = Color3.fromRGB(20, 20, 20)
	 _G.TabWindowColor = Color3.fromRGB(30, 30, 30)
	 _G.ContainerColor = Color3.fromRGB(30, 30, 30)
	 _G.TitleTextColor = Color3.fromRGB(150, 150, 150)
	 _G.ImageColor = Color3.fromRGB(150, 150, 150)
	 _G.LineThemeColor = Color3.fromRGB(150, 150, 150)
	 _G.TabTextColor = Color3.fromRGB(150, 150, 150)
	 _G.TabImageColor = Color3.fromRGB(150, 150, 150)
	 _G.TabThemeColor = Color3.fromRGB(250, 0, 0)
	 _G.SectionColor = Color3.fromRGB(150, 150, 150)
	 _G.SectionImageColor = Color3.fromRGB(150, 150, 150)
	 _G.SectionTextColor = Color3.fromRGB(150, 150, 150)
	 _G.SectionOn = Color3.fromRGB(0, 250, 0)
	 
	 local Update = {}
	
	local DiscordLib = {}
	
		local Balaraja = Instance.new("ScreenGui")
		
		Balaraja.Name = "Balaraja"
	    Balaraja.Parent = game.CoreGui
	    Balaraja.ZIndexBehavior = Enum.ZIndexBehavior.Sibling
	 
	local NotiFrame = Instance.new("Frame")
		NotiFrame.Name = "NotiFrame"
		NotiFrame.Parent = Balaraja
		NotiFrame.AnchorPoint = Vector2.new(0.5, 0.5)
		NotiFrame.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
		NotiFrame.BackgroundTransparency = 1
		NotiFrame.Position = UDim2.new(1.2, 0, 0.0613496937, 0)
		NotiFrame.Size = UDim2.new(0, 1632, 0, 100)
	
		local Notilistlayout = Instance.new("UIListLayout")
	
		Notilistlayout.Name = "Notilistlayout"
		Notilistlayout.Parent = NotiFrame
		Notilistlayout.FillDirection = Enum.FillDirection.Vertical
		Notilistlayout.SortOrder = Enum.SortOrder.LayoutOrder
		Notilistlayout.Padding = UDim.new(0, 5)
	
		function DiscordLib:Notification(text,text2,delays,logo)
			if logo == nil then
				logo = ""
			end
			if delays == nil then
				delays = 1
			end
			local TitleFrame = Instance.new("Frame")
	
			TitleFrame.Name = "TitleFrame"
			TitleFrame.Parent = NotiFrame
			TitleFrame.BackgroundColor3 = Color3.fromRGB(35,35,35)
			TitleFrame.Size = UDim2.new(0, 0, 0, 0)
	
			local Main_UiStroke = Instance.new("UIStroke")
	
			Main_UiStroke.Thickness = 1
			Main_UiStroke.Name = ""
			Main_UiStroke.Parent = TitleFrame
			Main_UiStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
			Main_UiStroke.LineJoinMode = Enum.LineJoinMode.Round
			Main_UiStroke.Color = Color3.fromRGB(50, 101, 152)
			Main_UiStroke.Transparency = 0
	
			TitleFrame:TweenSizeAndPosition(UDim2.new(0, 250-10, 0, 70),  UDim2.new(0.5, 0, 0.5,0), "Out", "Back", 0.3, true)
	
			local ConnerTitile = Instance.new("UICorner")
	
			ConnerTitile.CornerRadius = UDim.new(0, 4)
			ConnerTitile.Name = "ConnerTitile"
			ConnerTitile.Parent = TitleFrame
	
			local imagenoti = Instance.new("ImageLabel")
	
			imagenoti.Name = "imagenoti"
			imagenoti.Parent = TitleFrame
			imagenoti.AnchorPoint = Vector2.new(0.5, 0.5)
			imagenoti.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
			imagenoti.Position = UDim2.new(0.135999978, 0, 0.5, 0)
			imagenoti.Size = UDim2.new(0, 50, 0, 50)
			imagenoti.BackgroundTransparency = 1
			imagenoti.Image = "http://www.roblox.com/asset/?id="..tostring(logo)
	
			local txdlid = Instance.new("TextLabel")
			local LableFrame = Instance.new("Frame")
	
			txdlid.Name = "txdlid"
			txdlid.Parent = TitleFrame
			txdlid.BackgroundColor3 = Color3.fromRGB(85, 170, 255)
			txdlid.BackgroundTransparency = 1.000
			txdlid.Position = UDim2.new(0.25, 0, 0.25, 0)
			txdlid.Size = UDim2.new(0, 175, 0, 24)
			txdlid.Font = Enum.Font.Code
			txdlid.TextColor3 = Color3.fromRGB(85, 170, 255)
			txdlid.TextSize = 13.000
			txdlid.Text = text
			txdlid.TextXAlignment = Enum.TextXAlignment.Left
	
			LableFrame.Name = "LableFrame"
			LableFrame.Parent = TitleFrame
			LableFrame.AnchorPoint = Vector2.new(0.5, 0.5)
			LableFrame.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
			LableFrame.BackgroundTransparency = 1.000
			LableFrame.Position = UDim2.new(0.625999987, 0, 0.620000005, 0)
			LableFrame.Size = UDim2.new(0, 175, 0, 25)
	
			local TextNoti = Instance.new("TextLabel")
	
			TextNoti.Name = "TextNoti"
			TextNoti.Parent = LableFrame
			TextNoti.Active = true
			TextNoti.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
			TextNoti.BackgroundTransparency = 1.000
			TextNoti.Size = UDim2.new(0, 175, 0, 25)
			TextNoti.Font = Enum.Font.Code
			TextNoti.Text = text2
			TextNoti.TextColor3 = Color3.fromRGB(255, 255, 255)
			TextNoti.TextSize = 12.000
			TextNoti.TextXAlignment = Enum.TextXAlignment.Left
	
			repeat wait() until TitleFrame.Size == UDim2.new(0, 250-10, 0, 70)
	
			local Time = Instance.new("Frame")
			local UICorner = Instance.new("UICorner")
			local UIPadding = Instance.new("UIPadding")
	
			Time.Name = "Time"
			Time.Parent = TitleFrame
			Time.Active = true
			Time.BackgroundColor3 = Color3.fromRGB(85, 170, 255)
			Time.BorderSizePixel = 0
			Time.Position = UDim2.new(0.0320000015, 0, 0.870000005, 0)
			Time.Size = UDim2.new(0, 236, 0, 3)
	
			UICorner.Parent = Time
			UICorner.CornerRadius = UDim.new(0, 4)
			UICorner.Name = ""
	
			UIPadding.Parent = NotiFrame
			UIPadding.PaddingLeft = UDim.new(0, 15)
			UIPadding.PaddingTop = UDim.new(0, 15)
	
			TweenService:Create(
				Time,
				TweenInfo.new(tonumber(delays), Enum.EasingStyle.Linear, Enum.EasingDirection.InOut),
				{Size = UDim2.new(0, 0, 0, 3)} 
			):Play()
			delay(tonumber(delays),function()
				TweenService:Create(
					imagenoti,
					TweenInfo.new(0.2, Enum.EasingStyle.Sine, Enum.EasingDirection.InOut),
					{ImageTransparency = 1} -- UDim2.new(0, 128, 0, 25)
				):Play()
				TweenService:Create(
					TextNoti,
					TweenInfo.new(0.2, Enum.EasingStyle.Sine, Enum.EasingDirection.InOut),
					{TextTransparency = 1} -- UDim2.new(0, 128, 0, 25)
				):Play()
				TweenService:Create(
					txdlid,
					TweenInfo.new(0.2, Enum.EasingStyle.Sine, Enum.EasingDirection.InOut),
					{TextTransparency = 1} -- UDim2.new(0, 128, 0, 25)
				):Play()
				wait(0.3)
				TweenService:Create(
					TitleFrame,
					TweenInfo.new(0.4, Enum.EasingStyle.Quart, Enum.EasingDirection.InOut),
					{Size = UDim2.new(0, 0, 0, 70)} -- UDim2.new(0, 128, 0, 25)
				):Play()
				wait(0.3)
				TitleFrame:Destroy()
			end
			)
		end
	 
	 do  local Update =  game:GetService("CoreGui").RobloxGui.Modules:FindFirstChild("Fai Fao")  if Update then Update:Destroy()
	 end 
	 end
	 
	 function Update:Window(text,logo,keybind)
	 local osfunc = {}
	    local osfunc2 = {}
	    local titlefunc = {}
	 local uihide = false
	 local abc = false
	 local logo = logo
	 local currentpage = ""
	 local keybind = keybind or Enum.KeyCode.RightControl
	 local yoo = string.gsub(tostring(keybind),"Enum.KeyCode.","")
	 
	 local Fiendhub = Instance.new("ScreenGui")
	 Fiendhub.Name = "Fiendhub"
	 Fiendhub.Parent = game.CoreGui
	 Fiendhub.ZIndexBehavior = Enum.ZIndexBehavior.Sibling
	 
	 local Main = Instance.new("Frame")
	 Main.Name = "Main"
	 Main.Parent = Fiendhub
	 Main.ClipsDescendants = true
	 Main.AnchorPoint = Vector2.new(0.5,0.5)
	 Main.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
	 Main.Position = UDim2.new(0.5, 0, 0.5, 0)
	 Main.Size = UDim2.new(0, 0, 0, 0)
	 
	 --Main:TweenSize(UDim2.new(0, 656, 0, 400),"Out","Quad",0.4,true)
	 --Main:TweenSize(UDim2.new(0, 656, 0, 300),"Out","Quad",0.4,true)
	 Main:TweenSize(UDim2.new(0, 480, 0, 280),"Out","Quad",0.4,true)
	 
	 
	 local MCNR = Instance.new("UICorner")
	 MCNR.Name = "MCNR"
	 MCNR.Parent = Main
	MCNR.CornerRadius = UDim.new(0, 5)
	 
	 local Top = Instance.new("Frame")
	 Top.Name = "Top"
	 Top.Parent = Main
	 Top.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
	 --Top.Size = UDim2.new(0, 656, 0, 27)
	 Top.Size = UDim2.new(0, 480, 0, 27)
	 
	 local TCNR = Instance.new("UICorner")
	 TCNR.Name = "TCNR"
	 TCNR.Parent = Top
	 
	 local Logo = Instance.new("ImageLabel")
	 Logo.Name = "Logo"
	 Logo.Parent = Top
	 Logo.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 Logo.BackgroundTransparency = 1.000
	 Logo.Position = UDim2.new(-0.01, 0,-0.319, 0)
	 Logo.Size = UDim2.new(0, 55,0, 45)
	 Logo.Image = "rbxassetid://"..tostring(logo)
	 
	 local Name = Instance.new("TextLabel")
	 Name.Name = "Name"
	 Name.Parent = Top
	 Name.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 Name.BackgroundTransparency = 1.000
	 Name.Position = UDim2.new(0.0909756112, 0, 0, 0)
	 Name.Size = UDim2.new(0, 61, 0, 27)
	 Name.Font = Enum.Font.Code
	 Name.Text = text
	 Name.TextColor3 = Color3.fromRGB(255, 255, 255)
	 Name.TextSize = 14.000
	 
	 local Hub = Instance.new("TextLabel")
	 Hub.Name = "Hub"
	 Hub.Parent = Top
	 Hub.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 Hub.BackgroundTransparency = 1.000
	 Hub.Position = UDim2.new(0, 110, 0, 0)
	 Hub.Size = UDim2.new(0, 81, 0, 27)
	 Hub.Font = Enum.Font.Code
	 Hub.Text = ""
	 Hub.TextColor3 = Color3.fromRGB(0,224,0)
	 Hub.TextSize = 14.000
	 Hub.TextXAlignment = Enum.TextXAlignment.Left
	 
	function titlefunc:Refresh(text)
	        Hub.Text = text
	end
	   
	 
	 
	 local MainImage = Instance.new("ImageLabel")
	 local MainImageFrame = Instance.new("Frame")
	 -- MainImage.Name =  "MainImage"
	 MainImage.Parent = Main
	 MainImage.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 MainImage.BackgroundTransparency = 1.000
	 MainImage.Position = UDim2.new(0, 25, 0, 25)
	 MainImage.Size = UDim2.new(0, 100, 0, 170)
	 MainImage.Image = ""
	 
	 
	 local Tab = Instance.new("Frame")
	 Tab.Name = "Tab"
	 Tab.Parent = Main
	 Tab.BackgroundColor3 = Color3.fromRGB(35, 35, 35)
	 Tab.Position = UDim2.new(0, 5, 0, 30)
	 --Tab.CornerRadius = UDim.new(0,5)
	 Tab.Size = UDim2.new(0, 0, 0, 0)
	 --Tab.Size = UDim2.new(0, 150, 0, 365)
	 
	 --local TabCorner = Instance.new("UICorner")
	 local TabCorner = Instance.new("UIListLayout")
	 TabCorner.Name = "TabCorner"
	 TabCorner.Parent = Tab
	 TabCorner.SortOrder = Enum.SortOrder.LayoutOrder
	 TabCorner.Padding = UDim.new(0, 15)
	 
	 local TCNR = Instance.new("UICorner")
	 TCNR.Name = "TCNR"
	 TCNR.Parent = Tab
	 
	 local ScrollTab = Instance.new("ScrollingFrame")
	 ScrollTab.Name = "ScrollTab"
	 ScrollTab.Parent = Tab
	 ScrollTab.Active = true
	 ScrollTab.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 ScrollTab.BackgroundTransparency = 1.000
	 ScrollTab.Size = UDim2.new(0, 133, 0, 250)
	 ScrollTab.CanvasSize = UDim2.new(0, 0, 0, 0)
	 ScrollTab.ScrollBarThickness = 0
	 
	 local PLL = Instance.new("UIListLayout")
	 PLL.Name = "PLL"
	 PLL.Parent = ScrollTab
	 PLL.SortOrder = Enum.SortOrder.LayoutOrder
	 PLL.Padding = UDim.new(0, 15)
	 
	 local PPD = Instance.new("UIPadding")
	 PPD.Name = "PPD"
	 PPD.Parent = ScrollTab
	 PPD.PaddingLeft = UDim.new(0, 10)
	 PPD.PaddingTop = UDim.new(0, 10)
	 
	 local Page = Instance.new("Frame")
	 Page.Name = "Page"
	 Page.Parent = Main
	 Page.BackgroundColor3 = Color3.fromRGB(0,0,0)
	 Page.Position = UDim2.new(0.295726834, 0, 0.144050003, 0)
	 Page.Size = UDim2.new(0, 330, 0, 280)
	 
	 local PCNR = Instance.new("UICorner")
	 PCNR.Name = "PCNR"
	 PCNR.Parent = Page
	 
	 local MainPage = Instance.new("Frame")
	 MainPage.Name = "MainPage"
	 MainPage.Parent = Page
	 MainPage.ClipsDescendants = true
	 MainPage.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 MainPage.BackgroundTransparency = 1.000
	 MainPage.Size = UDim2.new(0, 325, 0, 316)
	 
	 local PageList = Instance.new("Folder")
	 PageList.Name = "PageList"
	 PageList.Parent = MainPage
	 
	 local UIPageLayout = Instance.new("UIPageLayout")
	 
	 UIPageLayout.Parent = PageList
	 UIPageLayout.SortOrder = Enum.SortOrder.LayoutOrder
	 UIPageLayout.EasingDirection = Enum.EasingDirection.InOut
	 UIPageLayout.EasingStyle = Enum.EasingStyle.Quad
	 UIPageLayout.FillDirection = Enum.FillDirection.Vertical
	 UIPageLayout.Padding = UDim.new(0, 15)
	 UIPageLayout.TweenTime = 0.400
	 UIPageLayout.GamepadInputEnabled = false
	 UIPageLayout.ScrollWheelInputEnabled = false
	 UIPageLayout.TouchInputEnabled = false
	 
	 MakeDraggable(Top,Main)
	 
	 UserInputService.InputBegan:Connect(function(input)
	  if input.KeyCode == Enum.KeyCode[yoo] then
	  if uihide == false then
	  uihide = true
	  Main:TweenSize(UDim2.new(0, 0, 0, 0),"In","Quad",0.4,true)
	  else
	   uihide = false
	  Main:TweenSize(UDim2.new(0, 480, 0, 280),"Out","Quad",0.5,true)
	  end
	  end
	  end)
	 local uitab = {}
	 
	 function uitab:Tab(text,img)
	 local TabButton = Instance.new("TextButton")
	 local TabImage = Instance.new("ImageLabel")
	 TabButton.Parent = ScrollTab
	 TabButton.Name = text.."Server"
	 TabButton.Text = text
	 TabButton.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 TabButton.BackgroundTransparency = 1.000
	 TabButton.Size = UDim2.new(0, 125, 0, 23)
	 TabButton.Font = Enum.Font.Code
	 TabButton.TextColor3 = Color3.fromRGB(225, 225, 225)
	 TabButton.TextSize = 11.000
	 TabButton.TextTransparency = 0.100
	 
	 local TabFrame = Instance.new("Frame")
	 local UICornerFrame = Instance.new("UICorner")
	 TabFrame.Name = "TabFrame"
	 TabFrame.Parent = TabButton
	 TabFrame.ClipsDescendants = true
	 --TabFrame.Position = UDim2.new(0, 1, 0.1, 2)
	 TabFrame.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
	 TabFrame.BackgroundTransparency = 0.500
	 TabFrame.Size = UDim2.new(0, 118, 0.1, 23)
	 UICornerFrame.CornerRadius = UDim.new(0,0)
	 
	local postog = Instance.new("UIStroke")
	 
	 postog.Name = "postog"
	 postog.Parent = TabFrame
	 postog.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
	 postog.Color = Color3.fromRGB(255,255,255)
	 postog.LineJoinMode = Enum.LineJoinMode.Round
	 postog.Thickness = 1
	 postog.Transparency = 0.8
	 postog.Enabled = true
	 postog.Archivable = true
	 
	 UICornerFrame.Parent = TabFrame
	 
	 TabImage.Name = text or "TabImage"
	 TabImage.Parent = TabFrame
	 TabImage.BackgroundColor3 = _G.Color
	 TabImage.BackgroundTransparency = 1.000
	 TabImage.Position = UDim2.new(0, 0, 0, 0)
	 TabImage.Size = UDim2.new(0, 20, 0, 20)
	 TabImage.Image = img or "rbxassetid://"
	 TabImage.ImageColor3 = _G.Color
	 
	 local MainFramePage = Instance.new("ScrollingFrame")
	 MainFramePage.Name = text.."_Page"
	 MainFramePage.Parent = PageList
	 MainFramePage.Active = true
	 MainFramePage.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 MainFramePage.BackgroundTransparency = 1.000
	 MainFramePage.BorderSizePixel = 0
	 MainFramePage.Size = UDim2.new(0, 400, 0, 245)
	 MainFramePage.CanvasSize = UDim2.new(0, 0, 0, 0)
	 MainFramePage.ScrollBarThickness = 4
	 
	 local UIPadding = Instance.new("UIPadding")
	 local UIListLayout = Instance.new("UIListLayout")
	 
	 UIPadding.Parent = MainFramePage
	 UIPadding.PaddingLeft = UDim.new(0, 10)
	 UIPadding.PaddingTop = UDim.new(0, 10)
	 
	 UIListLayout.Padding = UDim.new(0,15)
	 UIListLayout.Parent = MainFramePage
	 UIListLayout.SortOrder = Enum.SortOrder.LayoutOrder
	 
	 
	 
	 TabButton.MouseButton1Click:Connect(function()
	  for i,v in next, ScrollTab:GetChildren() do
	  if v:IsA("TextButton") then
	  TweenService:Create(
	   v,
	   TweenInfo.new(0.3,Enum.EasingStyle.Quad,Enum.EasingDirection.Out),
	   {
	    TextTransparency = 0.5
	   }
	  ):Play()
	  end
	  TweenService:Create(
	   TabButton,
	   TweenInfo.new(0.3,Enum.EasingStyle.Quad,Enum.EasingDirection.Out),
	   {
	    TextTransparency = 0
	   }
	  ):Play()
	  end
	  for i,v in next, PageList:GetChildren() do
	  currentpage = string.gsub(TabButton.Name,"Server","").."_Page"
	  if v.Name == currentpage then
	  UIPageLayout:JumpTo(v)
	  end
	  end
	  end)
	 
	 if abc == false then
	 for i,v in next, ScrollTab:GetChildren() do
	 if v:IsA("TextButton") then
	 TweenService:Create(
	  v,
	  TweenInfo.new(0.3,Enum.EasingStyle.Quad,Enum.EasingDirection.Out),
	  {
	   TextTransparency = 0.5
	  }
	 ):Play()
	 end
	 TweenService:Create(
	  TabButton,
	  TweenInfo.new(0.3,Enum.EasingStyle.Quad,Enum.EasingDirection.Out),
	  {
	   TextTransparency = 0
	  }
	 ):Play()
	 end
	 UIPageLayout:JumpToIndex(1)
	 abc = true
	 end
	 
	 game:GetService("RunService").Stepped:Connect(function()
	  pcall(function()
	   MainFramePage.CanvasSize = UDim2.new(0,0,0,UIListLayout.AbsoluteContentSize.Y + 20)
	   ScrollTab.CanvasSize = UDim2.new(0,0,0,PLL.AbsoluteContentSize.Y + 20)
	   end)
	  end)
	 function Update:Notification(textdesc)
	local NotificationHold = Instance.new("TextButton")
	local NotificationFrame = Instance.new("Frame")
	local OkayBtn = Instance.new("TextButton")
	local OkayBtnCorner = Instance.new("UICorner")
	local OkayBtnTitle = Instance.new("TextLabel")
	local NotificationTitle = Instance.new("TextLabel")
	local NotificationDesc = Instance.new("TextLabel")
	local NotifCorner = Instance.new("UICorner")
	local NotifHolderUIStroke = Instance.new("UIStroke")
	local Line = Instance.new("Frame")
	
	NotificationHold.Name = "NotificationHold"
	NotificationHold.Parent = Fiendhub
	NotificationHold.BackgroundColor3 = _G.WindowBackgroundColor
	NotificationHold.BackgroundTransparency = 1
	NotificationHold.BorderSizePixel = 0
	NotificationHold.Size = UDim2.new(0, 589, 0, 378)
	NotificationHold.AutoButtonColor = false
	NotificationHold.Font = Enum.Font.SourceSans
	NotificationHold.Text = ""
	NotificationHold.TextColor3 = _G.SectionTextColor
	NotificationHold.TextSize = 13.000
	
	TweenService:Create(NotificationHold, TweenInfo.new(.3, Enum.EasingStyle.Quad, Enum.EasingDirection.Out), {
	 BackgroundTransparency = 1
	}):Play()
	wait(0.4)
	
	NotificationFrame.Name = "NotificationFrame"
	NotificationFrame.Parent = NotificationHold
	NotificationFrame.AnchorPoint = Vector2.new(0.5, 0.5)
	NotificationFrame.BackgroundColor3 = Color3.fromRGB(15, 15, 15)
	NotificationFrame.BorderColor3 = _G.SectionColor
	NotificationFrame.BorderSizePixel = 0
	NotificationFrame.Transparency = 0
	NotificationFrame.ClipsDescendants = true
	NotificationFrame.Position = UDim2.new(0, 295, 0, 190)
	NotificationFrame.Size = UDim2.new(0, 0, 0, 0)
	
	NotificationFrame:TweenSize(UDim2.new(0, 400, 0, 250), Enum.EasingDirection.Out, Enum.EasingStyle.Quart, .6, true)
	
	NotifCorner.Name = "NotifCorner"
	NotifCorner.Parent = NotificationFrame
	NotifCorner.CornerRadius = UDim.new(0, 5)
	
	NotifHolderUIStroke.Name = "NotifHolderUIStroke"
	NotifHolderUIStroke.Parent = NotificationFrame
	NotifHolderUIStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
	NotifHolderUIStroke.Color = _G.SectionColor
	NotifHolderUIStroke.LineJoinMode = Enum.LineJoinMode.Round
	NotifHolderUIStroke.Thickness = 1
	NotifHolderUIStroke.Transparency = 0
	NotifHolderUIStroke.Enabled = true
	NotifHolderUIStroke.Archivable = true
	
	OkayBtn.Name = "OkayBtn"
	OkayBtn.Parent = NotificationFrame
	OkayBtn.BackgroundColor3 = Color3.fromRGB(190, 190, 190)
	OkayBtn.BorderSizePixel = 1
	OkayBtn.BorderColor3 = _G.SectionColor
	OkayBtn.Position = UDim2.new(0, 125, 0, 190)
	OkayBtn.Size = UDim2.new(0, 150, 0, 30)
	OkayBtn.AutoButtonColor = true
	OkayBtn.Font = Enum.Font.SourceSans
	OkayBtn.Text = ""
	OkayBtn.TextColor3 = _G.SectionTextColor
	OkayBtn.TextSize = 13.000
	
	OkayBtnCorner.CornerRadius = UDim.new(0, 5)
	OkayBtnCorner.Name = "OkayBtnCorner"
	OkayBtnCorner.Parent = OkayBtn
	
	OkayBtnTitle.Name = "OkayBtnTitle"
	OkayBtnTitle.Parent = OkayBtn
	OkayBtnTitle.BackgroundColor3 = _G.SectionColor
	OkayBtnTitle.BackgroundTransparency = 1.000
	OkayBtnTitle.Size = UDim2.new(0, 150, 0, 30)
	OkayBtnTitle.Text = "OK"
	OkayBtnTitle.Font = Enum.Font.Code
	OkayBtnTitle.TextColor3 = Color3.fromRGB(0, 0, 0)
	OkayBtnTitle.TextSize = 22.000
	
	NotificationTitle.Name = "NotificationTitle"
	NotificationTitle.Parent = NotificationFrame
	NotificationTitle.BackgroundColor3 = _G.SectionColor
	NotificationTitle.BackgroundTransparency = 1.000
	NotificationTitle.Position = UDim2.new(0, 0, 0, 10)
	NotificationTitle.Size = UDim2.new(0, 400, 0, 25)
	NotificationTitle.ZIndex = 3
	NotificationTitle.Font = Enum.Font.Code
	NotificationTitle.Text = "Notification"
	NotificationTitle.TextColor3 = Color3.fromRGB(255, 0, 0)
	NotificationTitle.TextSize = 22.000
	
	Line.Name = "Line"
	Line.Parent = NotificationFrame
	Line.BackgroundColor3 = _G.SectionColor
	Line.BorderSizePixel = 0
	Line.Position = UDim2.new(0, 10, 0, 40)
	Line.Size = UDim2.new(0, 380, 0, 1)
	
	NotificationDesc.Name = "NotificationDesc"
	NotificationDesc.Parent = NotificationFrame
	NotificationDesc.BackgroundColor3 = _G.SectionColor
	NotificationDesc.BackgroundTransparency = 1.000
	NotificationDesc.Position = UDim2.new(0, 10, 0, 80)
	NotificationDesc.Size = UDim2.new(0, 380, 0, 200)
	NotificationDesc.Font = Enum.Font.Code
	NotificationDesc.Text = textdesc
	NotificationDesc.TextScaled = false
	NotificationDesc.TextColor3 = _G.SectionTextColor
	NotificationDesc.TextSize = 16.000
	NotificationDesc.TextWrapped = true
	NotificationDesc.TextXAlignment = Enum.TextXAlignment.Center
	NotificationDesc.TextYAlignment = Enum.TextYAlignment.Top
	
	OkayBtn.MouseEnter:Connect(function()
	 TweenService:Create(OkayBtn, TweenInfo.new(.3, Enum.EasingStyle.Quad, Enum.EasingDirection.Out), {
	  BackgroundColor3 = Color3.fromRGB(34,34,34)}):Play()
	 end)
	
	OkayBtn.MouseLeave:Connect(function()
	 TweenService:Create(OkayBtn, TweenInfo.new(.2, Enum.EasingStyle.Quad, Enum.EasingDirection.Out), {
	  BackgroundColor3 = Color3.fromRGB(25, 25, 25)}):Play()
	 end)
	
	OkayBtn.MouseButton1Click:Connect(function()
	 NotificationFrame:TweenSize(UDim2.new(0, 0, 0, 0), Enum.EasingDirection.Out, Enum.EasingStyle.Quart, .6, true)
	
	 wait(0.4)
	
	 TweenService:Create(NotificationHold, TweenInfo.new(.3, Enum.EasingStyle.Quad, Enum.EasingDirection.Out), {
	  BackgroundTransparency = 1
	 }):Play()
	
	 wait(.3)
	
	 NotificationHold:Destroy()
	 end)
	end
	 
	 
	 local main = {}
	 function main:Button(text,callback)
	 local Button = Instance.new("Frame")
	 local UICorner = Instance.new("UICorner")
	 local TextBtn = Instance.new("TextButton")
	 local UICorner_2 = Instance.new("UICorner")
	 local Black = Instance.new("Frame")
	 local UICorner_3 = Instance.new("UICorner")
	 
	 Button.Name = "Button"
	 Button.Parent = MainFramePage
	 Button.BackgroundColor3 = Color3.fromRGB(225, 225, 225)
	 Button.BackgroundTransparency = 1
	 Button.Size = UDim2.new(0, 310, 0, 31)
	 
	 UICorner.CornerRadius = UDim.new(0, 5)
	 UICorner.Parent = Button
	 
	 TextBtn.Name = "TextBtn"
	 TextBtn.Parent = Button
	 TextBtn.BackgroundColor3 = Color3.fromRGB(244,244,244)
	 TextBtn.BackgroundTransparency = 0.500
	 TextBtn.Position = UDim2.new(0, 1, 0, 1)
	 TextBtn.Size = UDim2.new(0, 308, 0, 29)
	 TextBtn.AutoButtonColor = false
	 TextBtn.Font = Enum.Font.Code
	 TextBtn.Text = text
	 TextBtn.TextColor3 = Color3.fromRGB(0, 0, 0)
	 TextBtn.TextSize = 12.000
	 
	 UICorner_2.CornerRadius = UDim.new(0, 5)
	 UICorner_2.Parent = TextBtn
	 
	 Black.Name = "Black"
	 Black.Parent = Button
	 Black.BackgroundColor3 = Color3.fromRGB(0, 0, 0)
	 Black.BackgroundTransparency = 1.000
	 Black.BorderSizePixel = 0
	 Black.Position = UDim2.new(0, 1, 0, 1)
	 Black.Size = UDim2.new(0, 310, 0, 29)
	 
	 UICorner_3.CornerRadius = UDim.new(0, 5)
	 UICorner_3.Parent = Black
	 
	 
	 
	 TextBtn.MouseEnter:Connect(function()
	  TweenService:Create(
	   Black,
	   TweenInfo.new(0.4,Enum.EasingStyle.Quad,Enum.EasingDirection.Out),
	   {
	    BackgroundTransparency = 0.7
	   }
	  ):Play()
	  end)
	 TextBtn.MouseLeave:Connect(function()
	  TweenService:Create(
	   Black,
	   TweenInfo.new(0.4,Enum.EasingStyle.Quad,Enum.EasingDirection.Out),
	   {
	    BackgroundTransparency = 1
	   }
	  ):Play()
	  end)
	 TextBtn.MouseButton1Click:Connect(function()
	  TextBtn.TextSize = 0
	  TweenService:Create(
	   TextBtn,
	   TweenInfo.new(0.4,Enum.EasingStyle.Quad,Enum.EasingDirection.Out),
	   {
	    TextSize = 12
	   }
	  ):Play()
	  callback()
	  end)
	 end
	 function main:Toggle(TogInfo,default,callback)
	 local toggle = false
	 local CheckFrame = Instance.new("Frame")
	 local CheckFrame2 = Instance.new("Frame")
	 local UIStroke = Instance.new("UIStroke")
	 local UIListLayout = Instance.new("UIListLayout")
	 local UICorner = Instance.new("UICorner")
	 local ImageLabel = Instance.new("ImageLabel")
	 local Space = Instance.new("TextLabel")
	 local Title = Instance.new("TextLabel")
	 local ImageButton = Instance.new("ImageButton")
	 
	 -- Prop --
	 CheckFrame.Name = TogInfo or "CheckFrame"
	 CheckFrame.Parent = MainFramePage
	 CheckFrame.BackgroundColor3 = Color3.fromRGB(150, 150, 150)
	 CheckFrame.BackgroundTransparency = 1.000
	 CheckFrame.BorderSizePixel = 0
	 CheckFrame.Size = UDim2.new(0, 38, 0, 30)
	 
	 CheckFrame2.Name = "CheckFrame2"
	 CheckFrame2.Parent = CheckFrame
	 CheckFrame2.BackgroundColor3 = Color3.fromRGB(30,30,30)
	 CheckFrame2.BackgroundTransparency = 1
	 CheckFrame2.BorderSizePixel = 0
	 CheckFrame2.Position = UDim2.new(0, 3, 0, 0)
	 CheckFrame2.Size = UDim2.new(0, 308, 0, 30)
	 
	 UIStroke.Name = "UIStroke"
	 UIStroke.Parent = CheckFrame2
	 UIStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
	 UIStroke.Color = Color3.fromRGB(255,255,255)
	 UIStroke.LineJoinMode = Enum.LineJoinMode.Round
	 UIStroke.Thickness = 1
	 UIStroke.Transparency = 0.8
	 UIStroke.Enabled = true
	 UIStroke.Archivable = true
	 
	 UICorner.Parent = CheckFrame2
	 UICorner.CornerRadius = UDim.new(0, 0)
	 
	 ImageLabel.Name = "ImageLabel"
	 ImageLabel.Parent = CheckFrame2
	 ImageLabel.BackgroundColor3 = Color3.fromRGB(150, 150, 150)
	 ImageLabel.BackgroundTransparency = 1.000
	 ImageLabel.BorderSizePixel = 0
	 ImageLabel.Position = UDim2.new(-0.018, 0,-0.252, 0)
	 ImageLabel.Size = UDim2.new(0, 45,0, 45)
	 ImageLabel.Image = "rbxassetid://"
	 ImageLabel.ImageColor3 = Color3.fromRGB(224,224,224)
	 
	 Space.Name = "Space"
	 Space.Parent = CheckFrame2
	 Space.BackgroundColor3 = Color3.fromRGB(150, 150, 150)
	 Space.BackgroundTransparency = 1.000
	 Space.Position = UDim2.new(0, 30, 0, 0)
	 Space.Size = UDim2.new(0, 15, 0, 30)
	 Space.Font = Enum.Font.Code
	 Space.Text = ""
	 Space.TextSize = 12.000
	 Space.TextColor3 = Color3.fromRGB(255,225,225)
	 Space.TextXAlignment = Enum.TextXAlignment.Center
	 
	 Title.Name = "Title"
	 Title.Parent = CheckFrame2
	 Title.BackgroundColor3 = Color3.fromRGB(150, 150, 150)
	 Title.BackgroundTransparency = 1.000
	 Title.Position = UDim2.new(0, 50, 0, 0)
	 Title.Size = UDim2.new(0, 280, 0, 30)
	 Title.Font = Enum.Font.Code
	 Title.Text = TogInfo or "checkBox Title"
	 Title.TextColor3 = Color3.fromRGB(224,224,224)
	 Title.TextSize = 12.000
	 Title.TextXAlignment = Enum.TextXAlignment.Left
	 
	 ImageButton.Name = "ImageButton"
	 ImageButton.Parent = CheckFrame2
	 ImageButton.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 ImageButton.BackgroundTransparency = 1.000
	 ImageButton.Position = UDim2.new(0, 280, 0, 4)
	 ImageButton.Size = UDim2.new(0, 23, 0, 23)
	 ImageButton.ZIndex = 2
	 ImageButton.Image = "rbxassetid://3926311105"
	 ImageButton.ImageColor3 = Color3.fromRGB(224,224,224)
	 ImageButton.ImageRectOffset = Vector2.new(940, 784)
	 ImageButton.ImageRectSize = Vector2.new(48, 48)
	 
	 -- Toggle Script --
	 
	 if default == true then
	 ImageButton.ImageRectOffset = Vector2.new(4, 836)
	 game.TweenService:Create(ImageButton, TweenInfo.new(0.08, Enum.EasingStyle.Linear, Enum.EasingDirection.InOut),
	  {
	   ImageColor3 = Color3.fromRGB(255,225,225)}
	 ):Play()
	 toggle = not toggle
	 pcall(callback, toggle)
	 end
	 
	 ImageButton.MouseButton1Click:Connect(function()
	  if toggle == false then
	  game.TweenService:Create(ImageButton, TweenInfo.new(0.08, Enum.EasingStyle.Linear, Enum.EasingDirection.InOut),
	   {
	    ImageColor3 = Color3.fromRGB(255,225,225)}
	  ):Play()
	  ImageButton.ImageRectOffset = Vector2.new(4, 836)
	  else
	   game.TweenService:Create(ImageButton, TweenInfo.new(0.08, Enum.EasingStyle.Linear, Enum.EasingDirection.InOut),
	   {
	    ImageColor3 = Color3.fromRGB(224,224,224)}
	  ):Play()
	  ImageButton.ImageRectOffset = Vector2.new(940, 784)
	  end
	  toggle = not toggle
	  pcall(callback, toggle)
	  end)
	 end
	 
	function main:Dropdown(text,option,callback)
	 local isdropping = false
	 local Dropdown = Instance.new("Frame")
	 local UICorner = Instance.new("UICorner")
	 local DropTitle = Instance.new("TextLabel")
	 local DropScroll = Instance.new("ScrollingFrame")
	 local UIListLayout = Instance.new("UIListLayout")
	 local UIPadding = Instance.new("UIPadding")
	 local DropButton = Instance.new("TextButton")
	 local DropImage = Instance.new("ImageLabel")
	 local posto1 = Instance.new("UIStroke")
	 
	 Dropdown.Name = "Dropdown"
	 Dropdown.Parent = MainFramePage
	 Dropdown.BackgroundColor3 = Color3.fromRGB(28,28,28)
	 Dropdown.BackgroundTransparency = 1
	 Dropdown.ClipsDescendants = true
	 Dropdown.Size = UDim2.new(0, 310, 0, 31)
	 
	 posto1.Name = "posto"
	 posto1.Parent = Dropdown
	 posto1.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
	 posto1.Color = Color3.fromRGB(255,255,255)
	 posto1.LineJoinMode = Enum.LineJoinMode.Round
	 posto1.Thickness = 1
	 posto1.Transparency = 0.8
	 posto1.Enabled = true
	 posto1.Archivable = true
	 
	 UICorner.CornerRadius = UDim.new(0, 0)
	 UICorner.Parent = Dropdown
	 
	 DropTitle.Name = "DropTitle"
	 DropTitle.Parent = Dropdown
	 DropTitle.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 DropTitle.BackgroundTransparency = 1.000
	 DropTitle.Size = UDim2.new(0, 310, 0, 31)
	 DropTitle.Font = Enum.Font.Code
	 DropTitle.Text = text.. " : "
	 DropTitle.TextColor3 = Color3.fromRGB(225, 225, 225)
	 DropTitle.TextSize = 12.000
	 
	 DropScroll.Name = "DropScroll"
	 DropScroll.Parent = DropTitle
	 DropScroll.Active = true
	 DropScroll.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 DropScroll.BackgroundTransparency = 1.000
	 DropScroll.BorderSizePixel = 0
	 DropScroll.Position = UDim2.new(0, 0, 0, 31)
	 DropScroll.Size = UDim2.new(0, 310, 0, 100)
	 DropScroll.CanvasSize = UDim2.new(0, 0, 0, 0)
	 DropScroll.ScrollBarThickness = 3
	 
	 UIListLayout.Parent = DropScroll
	 UIListLayout.SortOrder = Enum.SortOrder.LayoutOrder
	 UIListLayout.Padding = UDim.new(0, 5)
	 
	 UIPadding.Parent = DropScroll
	 UIPadding.PaddingLeft = UDim.new(0, 5)
	 UIPadding.PaddingTop = UDim.new(0, 5)
	 
	 DropImage.Name = "DropImage"
	 DropImage.Parent = Dropdown
	 DropImage.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 DropImage.BackgroundTransparency = 1.000
	 DropImage.Position = UDim2.new(0, 280, 0, 6)
	 DropImage.Rotation = 180.000
	 DropImage.Size = UDim2.new(0, 20, 0, 20)
	 DropImage.Image = "rbxassetid://6031090990"
	 
	 DropButton.Name = "DropButton"
	 DropButton.Parent = Dropdown
	 DropButton.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 DropButton.BackgroundTransparency = 1.000
	 DropButton.Size = UDim2.new(0, 310, 0, 31)
	 DropButton.Font = Enum.Font.SourceSans
	 DropButton.Text = ""
	 DropButton.TextColor3 = Color3.fromRGB(0, 0, 0)
	 DropButton.TextSize = 14.000
	 
	 for i,v in next,option do
	 local Item = Instance.new("TextButton")
	 
	 Item.Name = "Item"
	 Item.Parent = DropScroll
	 Item.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 Item.BackgroundTransparency = 1.000
	 Item.Size = UDim2.new(0, 310, 0, 26)
	 Item.Font = Enum.Font.Code
	 Item.Text = tostring(v)
	 Item.TextColor3 = Color3.fromRGB(225, 225, 225)
	 Item.TextSize = 13.000
	 Item.TextTransparency = 0.500
	 
	 Item.MouseEnter:Connect(function()
	  TweenService:Create(
	   Item,
	   TweenInfo.new(0.3,Enum.EasingStyle.Quad,Enum.EasingDirection.Out),
	   {
	    TextTransparency = 0
	   }
	  ):Play()
	  end)
	 
	 Item.MouseLeave:Connect(function()
	  TweenService:Create(
	   Item,
	   TweenInfo.new(0.3,Enum.EasingStyle.Quad,Enum.EasingDirection.Out),
	   {
	    TextTransparency = 0.5
	   }
	  ):Play()
	  end)
	 
	 Item.MouseButton1Click:Connect(function()
	  isdropping = false
	  Dropdown:TweenSize(UDim2.new(0,310,0,31),"Out","Quad",0.3,true)
	  TweenService:Create(
	   DropImage,
	   TweenInfo.new(0.3,Enum.EasingStyle.Quad,Enum.EasingDirection.Out),
	   {
	    Rotation = 180
	   }
	  ):Play()
	  callback(Item.Text)
	  DropTitle.Text = text.." : "..Item.Text
	  end)
	 end
	 
	 DropScroll.CanvasSize = UDim2.new(0,0,0,UIListLayout.AbsoluteContentSize.Y + 10)
	 
	 DropButton.MouseButton1Click:Connect(function()
	  if isdropping == false then
	  isdropping = true
	  Dropdown:TweenSize(UDim2.new(0,310,0,131),"Out","Quad",0.3,true)
	  TweenService:Create(
	   DropImage,
	   TweenInfo.new(0.3,Enum.EasingStyle.Quad,Enum.EasingDirection.Out),
	   {
	    Rotation = 0
	   }
	  ):Play()
	  else
	   isdropping = false
	  Dropdown:TweenSize(UDim2.new(0,310,0,31),"Out","Quad",0.3,true)
	  TweenService:Create(
	   DropImage,
	   TweenInfo.new(0.3,Enum.EasingStyle.Quad,Enum.EasingDirection.Out),
	   {
	    Rotation = 180
	   }
	  ):Play()
	  end
	  end)
	 
	 local dropfunc = {}
	 function dropfunc:Add(t)
	 local Item = Instance.new("TextButton")
	 Item.Name = "Item"
	 Item.Parent = DropScroll
	 Item.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 Item.BackgroundTransparency = 1.000
	 Item.Size = UDim2.new(0, 310, 0, 26)
	 Item.Font = Enum.Font.Code
	 Item.Text = tostring(t)
	 Item.TextColor3 = Color3.fromRGB(225, 225, 225)
	 Item.TextSize = 13.000
	 Item.TextTransparency = 0.500
	 
	 Item.MouseEnter:Connect(function()
	  TweenService:Create(
	   Item,
	   TweenInfo.new(0.3,Enum.EasingStyle.Quad,Enum.EasingDirection.Out),
	   {
	    TextTransparency = 0
	   }
	  ):Play()
	  end)
	 
	 Item.MouseLeave:Connect(function()
	  TweenService:Create(
	   Item,
	   TweenInfo.new(0.3,Enum.EasingStyle.Quad,Enum.EasingDirection.Out),
	   {
	    TextTransparency = 0.5
	   }
	  ):Play()
	  end)
	 
	 Item.MouseButton1Click:Connect(function()
	  isdropping = false
	  Dropdown:TweenSize(UDim2.new(0,310,0,31),"Out","Quad",0.3,true)
	  TweenService:Create(
	   DropImage,
	   TweenInfo.new(0.3,Enum.EasingStyle.Quad,Enum.EasingDirection.Out),
	   {
	    Rotation = 180
	   }
	  ):Play()
	  callback(Item.Text)
	  DropTitle.Text = text.." : "..Item.Text
	  end)
	 end
	 function dropfunc:Clear()
	 DropTitle.Text = tostring(text).." : "
	 isdropping = false
	 Dropdown:TweenSize(UDim2.new(0,310,0,31),"Out","Quad",0.3,true)
	 TweenService:Create(
	  DropImage,
	  TweenInfo.new(0.3,Enum.EasingStyle.Quad,Enum.EasingDirection.Out),
	  {
	   Rotation = 180
	  }
	 ):Play()
	 for i,v in next, DropScroll:GetChildren() do
	 if v:IsA("TextButton") then
	 v:Destroy()
	 end
	 end
	 end
	 return dropfunc
	 end
	 
	function main:Slider1(slidertitle, min, max, start, callback)
	local slider1func = {}
	local SliderFrame = Instance.new("Frame")
	local SliderFrame_2 = Instance.new("Frame")
	local UIStroke = Instance.new("UIStroke")
	local UICorner = Instance.new("UICorner")
	local ImageLabel = Instance.new("ImageLabel")
	local Space = Instance.new("TextLabel")
	local Title = Instance.new("TextLabel")
	local SliderInput = Instance.new("Frame")
	local SliderButton = Instance.new("Frame")
	local SliderCount = Instance.new("Frame")
	local SliderCorner = Instance.new("UICorner")
	local SliderCorner2 = Instance.new("UICorner")
	local BoxFrame = Instance.new("Frame")
	local SliderBox = Instance.new("TextBox")
	local SliderStroke = Instance.new("UIStroke")
	local Title_2 = Instance.new("TextButton")
	local UICorner_2 = Instance.new("UICorner")
	local UICorner_3 = Instance.new("UICorner")
	
	-- Prop --
	SliderFrame.Name = slidertitle or "SliderFrame"
	SliderFrame.Parent = MainFramePage
	SliderFrame.BackgroundColor3 = Color3.fromRGB(28,28,28)
	SliderFrame.BackgroundTransparency = 1.000
	SliderFrame.BorderSizePixel = 0
	SliderFrame.Size = UDim2.new(0, 300, 0, 55)
	
	SliderFrame_2.Name = "SliderFrame_2"
	SliderFrame_2.Parent = SliderFrame
	SliderFrame_2.BackgroundColor3 = Color3.fromRGB(28,28,28)
	SliderFrame_2.BackgroundTransparency = 1
	SliderFrame_2.BorderSizePixel = 0
	SliderFrame_2.Position = UDim2.new(0, 3, 0, 0)
	SliderFrame_2.Size = UDim2.new(0, 308, 0, 55)
	
	UIStroke.Name = "UIStroke"
	UIStroke.Parent = SliderFrame_2
	UIStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
	UIStroke.Color = Color3.fromRGB(255,255,255)
	UIStroke.LineJoinMode = Enum.LineJoinMode.Round
	UIStroke.Thickness = 1
	UIStroke.Transparency = 0.8
	UIStroke.Enabled = true
	UIStroke.Archivable = true
	
	UICorner.Parent = SliderFrame_2
	UICorner.CornerRadius = UDim.new(0, 0)
	
	ImageLabel.Name = "ImageLabel"
	ImageLabel.Parent = SliderFrame_2
	ImageLabel.BackgroundColor3 = Color3.fromRGB(150, 150, 150)
	ImageLabel.BackgroundTransparency = 1.000
	ImageLabel.BorderSizePixel = 0
	ImageLabel.Position = UDim2.new(0, -5, 0, -5)
	ImageLabel.Size = UDim2.new(0, 45, 0, 45)
	ImageLabel.Image = "rbxassetid://"
	ImageLabel.ImageColor3 = Color3.fromRGB(224,224,224)
	
	Space.Name = "Space"
	Space.Parent = SliderFrame_2
	Space.BackgroundColor3 = Color3.fromRGB(150, 150, 150)
	Space.BackgroundTransparency = 1.000
	Space.Position = UDim2.new(0, 30, 0, 0)
	Space.Size = UDim2.new(0, 15, 0, 30)
	Space.Font = Enum.Font.Code
	Space.Text = ""
	Space.TextSize = 15.000
	Space.TextColor3 = Color3.fromRGB(224,224,224)
	Space.TextXAlignment = Enum.TextXAlignment.Center
	
	Title.Name = "Title"
	Title.Parent = SliderFrame_2
	Title.BackgroundColor3 = Color3.fromRGB(150, 150, 150)
	Title.BackgroundTransparency = 1.000
	Title.Position = UDim2.new(0, 50, 0, 0)
	Title.Size = UDim2.new(0, 280, 0, 30)
	Title.Font = Enum.Font.Code
	Title.Text = slidertitle or "Slider Title"
	Title.TextColor3 = Color3.fromRGB(224,224,224)
	Title.TextSize = 12.000
	Title.TextXAlignment = Enum.TextXAlignment.Left
	
	SliderInput.Name = "SliderInput"
	SliderInput.Parent = SliderFrame_2
	SliderInput.BackgroundColor3 = Color3.fromRGB(224,224,224)
	SliderInput.BackgroundTransparency = 0.7
	SliderInput.BorderSizePixel = 0
	SliderInput.Position = UDim2.new(0, 8, 0, 37)
	SliderInput.Size = UDim2.new(0, 290, 0, 4)
	
	SliderCorner2.CornerRadius = UDim.new(0, 100000)
	SliderCorner2.Parent = SliderInput
	
	SliderButton.Name = "SliderButton"
	SliderButton.Parent = SliderInput
	SliderButton.BackgroundColor3 = Color3.fromRGB(150, 150, 150)
	SliderButton.BackgroundTransparency = 1.000
	SliderButton.BorderSizePixel = 0
	SliderButton.Position = UDim2.new(0, 0, 0, -7)
	SliderButton.Size = UDim2.new(0, 290, 0, 25)
	
	SliderCount.Name = "SliderCount"
	SliderCount.Parent = SliderButton
	SliderCount.BackgroundColor3 = Color3.fromRGB(224,224,224)
	SliderCount.BackgroundTransparency = 0.3
	SliderCount.BorderSizePixel = 0
	SliderCount.Position = UDim2.new(0,start,0,0)
	SliderCount.Size = UDim2.new(0, 18, 0, 18)
	
	Title_2.Name = "Title_2"
	Title_2.Parent = SliderButton
	Title_2.AnchorPoint = Vector2.new(0, 0)
	Title_2.BackgroundColor3 = Color3.fromRGB(224,224,224)
	Title_2.AutoButtonColor = false
	Title_2.BackgroundTransparency = 1.000
	Title_2.Position = UDim2.new(0,start,0,0)
	Title_2.Size = UDim2.new(0, 18, 0, 18)
	Title_2.Font = Enum.Font.Code
	Title_2.Text = tostring(start and math.floor((start / max) * (max - min) + min) or 0)
	Title_2.TextColor3 = Color3.fromRGB(224,224,224)
	Title_2.TextSize = 8.000
	Title_2.TextXAlignment = Enum.TextXAlignment.Center
	
	UICorner_2.Parent = Title_2
	UICorner_2.CornerRadius = UDim.new(0, 100000)
	
	SliderCorner.CornerRadius = UDim.new(0, 100000)
	SliderCorner.Parent = SliderCount
	
	SliderStroke.Name = "SliderStroke"
	SliderStroke.Parent = BoxFrame
	SliderStroke.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
	SliderStroke.Color = Color3.fromRGB(255,255,255)
	SliderStroke.LineJoinMode = Enum.LineJoinMode.Round
	SliderStroke.Thickness = 1
	SliderStroke.Transparency = 0.8
	SliderStroke.Enabled = true
	SliderStroke.Archivable = true
	
	BoxFrame.Name = "BoxFrame"
	BoxFrame.Parent = SliderFrame_2
	BoxFrame.BackgroundColor3 = Color3.fromRGB(20, 20, 20)
	BoxFrame.BackgroundTransparency = 1.000
	BoxFrame.Size = UDim2.new(0, 50, 0, 15)
	BoxFrame.Position = UDim2.new(0, 240, 0, 8)
	
	SliderBox.Name = "SliderBox"
	SliderBox.Parent = BoxFrame
	SliderBox.BackgroundColor3 = Color3.fromRGB(200, 0, 0)
	SliderBox.BackgroundTransparency = 1.000
	SliderBox.Position = UDim2.new(0, 0, 0, 1.65)
	SliderBox.Size = UDim2.new(0, 50, 0, 15)
	SliderBox.ClearTextOnFocus = false
	SliderBox.Font = Enum.Font.Code
	SliderBox.Text = tostring(start and math.floor((start / max) * (max - min) + min) or 0)
	SliderBox.TextColor3 = Color3.fromRGB(224,224,224)
	SliderBox.TextSize = 9.000
	SliderBox.TextTransparency = 0
	SliderBox.TextXAlignment = Enum.TextXAlignment.Center
	SliderBox.TextEditable = true
	
	UICorner_3.Parent = BoxFrame
	UICorner_3.CornerRadius = UDim.new(0, 2)
	
	-- Slider Script --
	local dragging
	local SliderButtonStart
	local SliderButtonInput
	local slide = SliderButton
	
	local function slide(input)
	local slidein = UDim2.new(math.clamp((input.Position.X - SliderButton.AbsolutePosition.X) / SliderButton.AbsoluteSize.X, 0, 1), 0, 0, 0)
	SliderCount:TweenPosition(slidein, Enum.EasingDirection.InOut, Enum.EasingStyle.Linear, 0.08, true)
	Title_2:TweenPosition(slidein, Enum.EasingDirection.InOut, Enum.EasingStyle.Linear, 0.12, true)
	local Value = math.floor(((slidein.X.Scale * max) / max) * (max - min) + min)
	SliderBox.Text = tostring(Value)
	Title_2.Text = tostring(Value)
	pcall(callback, Value, slidein)
	end
	
	SliderButton.InputBegan:Connect(function(input)
	 if input.UserInputType == Enum.UserInputType.MouseButton1 or input.UserInputType == Enum.UserInputType.Touch then
	 dragging = true
	 SliderButtonInput = input
	 SliderButtonStart = input.Position.X
	 slidein = SliderButton.AbsolutePosition.X
	 game.TweenService:Create(SliderCount, TweenInfo.new(0.08, Enum.EasingStyle.Linear, Enum.EasingDirection.InOut), {
	  BackgroundTransparency = 0, Size = UDim2.new(0, 14, 0, 14)}):Play()
	 game.TweenService:Create(Title_2, TweenInfo.new(0.12, Enum.EasingStyle.Linear, Enum.EasingDirection.InOut), {
	  AnchorPoint = Vector2.new(0.22, 0.8), TextSize = 13.000, BackgroundTransparency = 0, Size = UDim2.new(0, 25, 0, 25)}):Play()
	 game.TweenService:Create(SliderBox, TweenInfo.new(0.08, Enum.EasingStyle.Linear, Enum.EasingDirection.InOut), {
	  TextTransparency = 0
	 }):Play()
	 game.TweenService:Create(SliderInput, TweenInfo.new(0.08, Enum.EasingStyle.Linear, Enum.EasingDirection.InOut), {
	  BackgroundTransparency = 0.5
	 }):Play()
	 game.TweenService:Create(SliderStroke, TweenInfo.new(0.08, Enum.EasingStyle.Linear, Enum.EasingDirection.InOut), {
	  Transparency = 0
	 }):Play()
	 end
	 input.Changed:Connect(function(input)
	  if input.UserInputType == Enum.UserInputState.End then
	  dragging = false
	
	  end
	  end)
	 end)
	SliderButton.InputEnded:Connect(function(input)
	 if input.UserInputType == Enum.UserInputType.MouseMovement or input.UserInputType == Enum.UserInputType.Touch then
	 dragging = false
	 SliderButtonInput = input
	 game.TweenService:Create(SliderCount, TweenInfo.new(0.08, Enum.EasingStyle.Linear, Enum.EasingDirection.InOut), {
	  BackgroundTransparency = 0.3, Size = UDim2.new(0, 18, 0, 18)}):Play()
	 game.TweenService:Create(Title_2, TweenInfo.new(0.12, Enum.EasingStyle.Linear, Enum.EasingDirection.InOut), {
	  AnchorPoint = Vector2.new(0, 0), TextSize = 8.000, BackgroundTransparency = 1.000, Size = UDim2.new(0, 18, 0, 18)}):Play()
	 game.TweenService:Create(SliderBox, TweenInfo.new(0.08, Enum.EasingStyle.Linear, Enum.EasingDirection.InOut), {
	  TextTransparency = 0.5
	 }):Play()
	 game.TweenService:Create(SliderInput, TweenInfo.new(0.08, Enum.EasingStyle.Linear, Enum.EasingDirection.InOut), {
	  BackgroundTransparency = 0.7
	 }):Play()
	 game.TweenService:Create(SliderStroke, TweenInfo.new(0.08, Enum.EasingStyle.Linear, Enum.EasingDirection.InOut), {
	  Transparency = 0.5
	 }):Play()
	 end
	 end)
	UserInputService.InputChanged:Connect(function(input)
	 if input == SliderButtonInput and dragging then
	 slide(input)
	 end
	 end)
	
	function set(property)
	if property == "Text" then
	if tonumber(SliderBox.Text) then
	if tonumber(SliderBox.Text) <= max then
	Value = SliderBox.Text
	Title_2.Text = SliderBox.Text
	SliderCount:TweenPosition(UDim2.new(((tonumber(SliderBox.Text) or min) - min) / (max - min), 0, 0, 0), "InOut", "Linear", 0.08, true)
	Title_2:TweenPosition(UDim2.new(((tonumber(SliderBox.Text) or min) - min) / (max - min), 0, 0, 0), "InOut", "Linear", 0.12, true)
	pcall(function()
	 callback(Value)
	 end)
	end
	if tonumber(SliderBox.Text) > max then
	SliderBox.Text = max
	Title_2.Text = max
	Value = max
	SliderCount:TweenPosition(UDim2.new(((max or min) - min) / (max - min), 0, 0, 0), "InOut", "Linear", 0.08, true)
	Title_2:TweenPosition(UDim2.new(((max or min) - min) / (max - min), 0, 0, 0), "InOut", "Linear", 0.12, true)
	pcall(function()
	 callback(Value)
	 end)
	end
	if tonumber(SliderBox.Text) >= min then
	Value = SliderBox.Text
	Title_2.Text = SliderBox.Text
	SliderCount:TweenPosition(UDim2.new(((tonumber(SliderBox.Text) or min) - min) / (max - min), 0, 0, 0), "InOut", "Linear", 0.08, true)
	Title_2:TweenPosition(UDim2.new(((tonumber(SliderBox.Text) or min) - min) / (max - min), 0, 0, 0), "InOut", "Linear", 0.12, true)
	pcall(function()
	 callback(Value)
	 end)
	end
	if tonumber(SliderBox.Text) < min then
	Value = min
	Title_2 = min
	SliderCount.Position = UDim2.new(((min or min) - min) / (max - min), 0, 0, 0)
	Title_2.Position = UDim2.new(((min or min) - min) / (max - min), 0, 0, 0)
	pcall(function()
	 callback(Value)
	 end)
	end
	else
	 SliderBox.Text = "" or Value
	Title_2.Text = Value
	end
	end
	end
	
	SliderBox.Focused:Connect(function()
	 SliderBox.Changed:Connect(set)
	 end)
	
	SliderBox.FocusLost:Connect(function(enterP)
	 if not enterP then
	 if SliderBox.Text == "" then
	 SliderBox.Text = min
	 Title_2.Text = min
	 Value = min
	 SliderCount:TweenPosition(UDim2.new(((min) - min) / (max - min), 0, 0, 0), "InOut", "Linear", 0.08, true)
	 Title_2:TweenPosition(UDim2.new(((min) - min) / (max - min), 0, 0, 0), "InOut", "Linear", 0.12, true)
	 pcall(function()
	  callback(Value)
	  end)
	 end
	 if tonumber(SliderBox.Text) > tonumber(max) then
	 Value = max
	 SliderBox.Text = max
	 Title_2.Text = max
	 SliderCount:TweenPosition(UDim2.new(((max or min) - min) / (max - min), 0, 0, 0), "InOut", "Linear", 0.08, true)
	 Title_2:TweenPosition(UDim2.new(((max or min) - min) / (max - min), 0, 0, 0), "InOut", "Linear", 0.12, true)
	 pcall(function()
	  callback(Value)
	  end)
	 else
	  Value = tonumber(SliderBox.Text)
	 end
	 if tonumber(SliderBox.Text) < min then
	 SliderBox.Text = min
	 Title_2.Text = min
	 Value = min
	 SliderCount:TweenPosition(UDim2.new(((min) - min) / (max - min), 0, 0, 0), "InOut", "Linear", 0.08, true)
	 Title_2:TweenPosition(UDim2.new(((min) - min) / (max - min), 0, 0, 0), "InOut", "Linear", 0.12, true)
	 pcall(function()
	  callback(Value)
	  end)
	 else
	  Value = tonumber(SliderBox.Text)
	 end
	 end
	 if tonumber(SliderBox.Text) > max then
	 SliderBox.Text = max
	 Title_2.Text = max
	 Value = max
	 SliderCount:TweenPosition(UDim2.new(((max or min) - min) / (max - min), 0, 0, 0), "InOut", "Linear", 0.08, true)
	 Title_2:TweenPosition(UDim2.new(((max or min) - min) / (max - min), 0, 0, 0), "InOut", "Linear", 0.12, true)
	 pcall(function()
	  callback(Value)
	  end)
	 else
	  Value = tonumber(SliderBox.Text)
	 end
	 if tonumber(SliderBox.Text) < min then
	 SliderBox.Text = min
	 Title_2.Text = min
	 Value = min
	 SliderCount.Position = UDim2.new(((min) - min) / (max - min), 0, 0, 0)
	 Title_2.Position = UDim2.new(((min) - min) / (max - min), 0, 0, 0)
	 pcall(function()
	  callback(Value)
	  end)
	 else
	  Value = tonumber(SliderBox.Text)
	 end
	 if SliderBox.Text == "" then
	 SliderBox.Text = min
	 Title_2.Text = min
	 Value = min
	 SliderCount:TweenPosition(UDim2.new(((min) - min) / (max - min), 0, 0, 0), "InOut", "Linear", 0.08, true)
	 Title_2:TweenPosition(UDim2.new(((min) - min) / (max - min), 0, 0, 0), "InOut", "Linear", 0.12, true)
	 pcall(function()
	  callback(Value)
	  end)
	 end
	 end)
	return sliderfunc
	end
	 
	 function main:Slider(text,min,max,set,callback)
	 local Slider = Instance.new("Frame")
	 local slidercorner = Instance.new("UICorner")
	 local sliderr = Instance.new("Frame")
	 local sliderrcorner = Instance.new("UICorner")
	 local SliderLabel = Instance.new("TextLabel")
	 local HAHA = Instance.new("Frame")
	 local AHEHE = Instance.new("TextButton")
	 local bar = Instance.new("Frame")
	 local bar1 = Instance.new("Frame")
	 local bar1corner = Instance.new("UICorner")
	 local barcorner = Instance.new("UICorner")
	 local circlebar = Instance.new("Frame")
	 local UICorner = Instance.new("UICorner")
	 local slidervalue = Instance.new("Frame")
	 local valuecorner = Instance.new("UICorner")
	 local TextBox = Instance.new("TextBox")
	 local UICorner_2 = Instance.new("UICorner")
	 local posto = Instance.new("UIStroke")
	 
	 Slider.Name = "Slider"
	 Slider.Parent = MainFramePage
	 Slider.BackgroundColor3 = Color3.fromRGB(255,255,255)
	 Slider.BackgroundTransparency = 0.8
	 Slider.Size = UDim2.new(0, 310, 0, 51)
	 
	 slidercorner.CornerRadius = UDim.new(0, 5)
	 slidercorner.Name = "slidercorner"
	 slidercorner.Parent = Slider
	 
	 sliderr.Name = "sliderr"
	 sliderr.Parent = Slider
	 sliderr.BackgroundTransparency = 0
	 sliderr.BackgroundColor3 = Color3.fromRGB(30,30,30)
	 sliderr.Position = UDim2.new(0, 1, 0, 1)
	 sliderr.Size = UDim2.new(0, 308, 0, 49)
	 
	 sliderrcorner.CornerRadius = UDim.new(0, 5)
	 sliderrcorner.Name = "sliderrcorner"
	 sliderrcorner.Parent = sliderr
	 
	 SliderLabel.Name = "SliderLabel"
	 SliderLabel.Parent = sliderr
	 SliderLabel.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 SliderLabel.BackgroundTransparency = 1.000
	 SliderLabel.Position = UDim2.new(0, 15, 0, 0)
	 SliderLabel.Size = UDim2.new(0, 180, 0, 26)
	 SliderLabel.Font = Enum.Font.Code
	 SliderLabel.Text = text
	 SliderLabel.TextColor3 = Color3.fromRGB(224,224,224)
	 SliderLabel.TextSize = 12.000
	 SliderLabel.TextTransparency = 0
	 SliderLabel.TextXAlignment = Enum.TextXAlignment.Left
	 
	 HAHA.Name = "HAHA"
	 HAHA.Parent = sliderr
	 HAHA.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 HAHA.BackgroundTransparency = 1.000
	 HAHA.Size = UDim2.new(0, 290, 0, 29)
	 
	 AHEHE.Name = "AHEHE"
	 AHEHE.Parent = sliderr
	 AHEHE.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 AHEHE.BackgroundTransparency = 1.000
	 AHEHE.Position = UDim2.new(0, 10, 0, 35)
	 AHEHE.Size = UDim2.new(0, 290, 0, 5)
	 AHEHE.Font = Enum.Font.SourceSans
	 AHEHE.Text = ""
	 AHEHE.TextColor3 = Color3.fromRGB(0, 0, 0)
	 AHEHE.TextSize = 14.000
	 
	 bar.Name = "bar"
	 bar.Parent = AHEHE
	 bar.BackgroundColor3 = _G.BGColor_2
	 bar.Size = UDim2.new(0, 290, 0, 5)
	 
	 bar1.Name = "bar1"
	 bar1.Parent = bar
	 bar1.BackgroundColor3 = _G.Color
	 bar1.BackgroundTransparency = 0
	 bar1.Size = UDim2.new(set/max, 0, 0, 5)
	 
	 bar1corner.CornerRadius = UDim.new(0, 5)
	 bar1corner.Name = "bar1corner"
	 bar1corner.Parent = bar1
	 
	 barcorner.CornerRadius = UDim.new(0, 5)
	 barcorner.Name = "barcorner"
	 barcorner.Parent = bar
	 
	 circlebar.Name = "circlebar"
	 circlebar.Parent = bar1
	 circlebar.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 circlebar.Position = UDim2.new(1, -2, 0, -3)
	 circlebar.Size = UDim2.new(0, 10, 0, 10)
	 
	 UICorner.CornerRadius = UDim.new(0, 100)
	 UICorner.Parent = circlebar
	 
	 slidervalue.Name = "slidervalue"
	 slidervalue.Parent = sliderr
	 slidervalue.BackgroundColor3 = _G.Color
	 slidervalue.BackgroundTransparency = 1
	 slidervalue.Position = UDim2.new(0, 245, 0, 5)
	 slidervalue.Size = UDim2.new(0, 65, 0, 18)
	 
	 valuecorner.CornerRadius = UDim.new(0, 5)
	 valuecorner.Name = "valuecorner"
	 valuecorner.Parent = slidervalue
	 
	 TextBox.Parent = slidervalue
	 TextBox.BackgroundColor3 = _G.BGColor_2
	 TextBox.Position = UDim2.new(0, 0, 0, 0)
	 TextBox.Size = UDim2.new(0, 60, 0, 20)
	 TextBox.Font = Enum.Font.Code
	 TextBox.TextColor3 = Color3.fromRGB(224,224,224)
	 TextBox.TextSize = 9.000
	 TextBox.Text = set
	 TextBox.TextTransparency = 0
	 
	 posto.Name = "posto"
	 posto.Parent = TextBox
	 posto.ApplyStrokeMode = Enum.ApplyStrokeMode.Border
	 posto.Color = Color3.fromRGB(224,224,224)
	 posto.LineJoinMode = Enum.LineJoinMode.Round
	 posto.Thickness = 1
	 posto.Transparency = 0
	 posto.Enabled = true
	 posto.Archivable = true
	 
	 UICorner_2.CornerRadius = UDim.new(0, 5)
	 UICorner_2.Parent = TextBox
	 
	 local mouse = game.Players.LocalPlayer:GetMouse()
	 local uis = game:GetService("UserInputService")
	 
	 if Value == nil then
	 Value = set
	 pcall(function()
	  callback(Value)
	  end)
	 end
	 
	 AHEHE.MouseButton1Down:Connect(function()
	  Value = math.floor((((tonumber(max) - tonumber(min)) / 300) * bar1.AbsoluteSize.X) + tonumber(min)) or 0
	  pcall(function()
	   callback(Value)
	   end)
	  bar1.Size = UDim2.new(0, math.clamp(mouse.X - bar1.AbsolutePosition.X, 0, 300), 0, 5)
	  circlebar.Position = UDim2.new(0, math.clamp(mouse.X - bar1.AbsolutePosition.X - 2, 0, 290), 0, -3)
	  moveconnection = mouse.Move:Connect(function()
	   TextBox.Text = Value
	   Value = math.floor((((tonumber(max) - tonumber(min)) / 300) * bar1.AbsoluteSize.X) + tonumber(min))
	   pcall(function()
	    callback(Value)
	    end)
	   bar1.Size = UDim2.new(0, math.clamp(mouse.X - bar1.AbsolutePosition.X, 0, 300), 0, 5)
	   circlebar.Position = UDim2.new(0, math.clamp(mouse.X - bar1.AbsolutePosition.X - 2, 0, 290), 0, -3)
	   end)
	  releaseconnection = uis.InputEnded:Connect(function(Mouse)
	   if Mouse.UserInputType == Enum.UserInputType.MouseButton1 then
	   Value = math.floor((((tonumber(max) - tonumber(min)) / 300) * bar1.AbsoluteSize.X) + tonumber(min))
	   pcall(function()
	    callback(Value)
	    end)
	   bar1.Size = UDim2.new(0, math.clamp(mouse.X - bar1.AbsolutePosition.X, 0, 300), 0, 5)
	   circlebar.Position = UDim2.new(0, math.clamp(mouse.X - bar1.AbsolutePosition.X - 2, 0, 290), 0, -3)
	   moveconnection:Disconnect()
	   releaseconnection:Disconnect()
	   end
	   end)
	  end)
	 releaseconnection = uis.InputEnded:Connect(function(Mouse)
	  if Mouse.UserInputType == Enum.UserInputType.MouseButton1 then
	  Value = math.floor((((tonumber(max) - tonumber(min)) / 300) * bar1.AbsoluteSize.X) + tonumber(min))
	  TextBox.Text = Value
	  end
	  end)
	 
	 TextBox.FocusLost:Connect(function()
	  if tonumber(TextBox.Text) > max then
	  TextBox.Text = max
	  end
	  bar1.Size = UDim2.new((TextBox.Text or 0) / max, 0, 0, 5)
	  circlebar.Position = UDim2.new(1, -2, 0, -3)
	  TextBox.Text = tostring(TextBox.Text and math.floor((TextBox.Text / max) * (max - min) + min))
	  pcall(callback, TextBox.Text)
	  end)
	 end
	 function main:Textbox(text,disappear,callback)
	 local Textbox = Instance.new("Frame")
	 local TextboxCorner = Instance.new("UICorner")
	 local Textboxx = Instance.new("Frame")
	 local TextboxxCorner = Instance.new("UICorner")
	 local TextboxLabel = Instance.new("TextLabel")
	 local txtbtn = Instance.new("TextButton")
	 local RealTextbox = Instance.new("TextBox")
	 local UICorner = Instance.new("UICorner")
	 
	 Textbox.Name = "Textbox"
	 Textbox.Parent = MainFramePage
	 Textbox.BackgroundColor3 = Color3.fromRGB(255,255,255)
	 Textbox.BackgroundTransparency = 0.8
	 Textbox.Size = UDim2.new(0, 312, 0, 31)
	 
	 TextboxCorner.CornerRadius = UDim.new(0, 0)
	 TextboxCorner.Name = "TextboxCorner"
	 TextboxCorner.Parent = Textbox
	 
	 Textboxx.Name = "Textboxx"
	 Textboxx.Parent = Textbox
	 Textboxx.BackgroundColor3 = Color3.fromRGB(30,30,30)
	 Textboxx.Position = UDim2.new(0, 1, 0, 1)
	 Textboxx.Size = UDim2.new(0, 310, 0, 29)
	 
	 TextboxxCorner.CornerRadius = UDim.new(0, 5)
	 TextboxxCorner.Name = "TextboxxCorner"
	 TextboxxCorner.Parent = Textboxx
	 
	 TextboxLabel.Name = "TextboxLabel"
	 TextboxLabel.Parent = Textbox
	 TextboxLabel.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 TextboxLabel.BackgroundTransparency = 1.000
	 TextboxLabel.Position = UDim2.new(0, 15, 0, 0)
	 TextboxLabel.Text = text
	 TextboxLabel.Size = UDim2.new(0, 145, 0, 31)
	 TextboxLabel.Font = Enum.Font.Code
	 TextboxLabel.TextColor3 = Color3.fromRGB(225, 225, 225)
	 TextboxLabel.TextSize = 16.000
	 TextboxLabel.TextTransparency = 0
	 TextboxLabel.TextXAlignment = Enum.TextXAlignment.Left
	 
	 txtbtn.Name = "txtbtn"
	 txtbtn.Parent = Textbox
	 txtbtn.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 txtbtn.BackgroundTransparency = 1.000
	 txtbtn.Position = UDim2.new(0, 1, 0, 1)
	 txtbtn.Size = UDim2.new(0, 310, 0, 29)
	 txtbtn.Font = Enum.Font.SourceSans
	 txtbtn.Text = ""
	 txtbtn.TextColor3 = Color3.fromRGB(0, 0, 0)
	 txtbtn.TextSize = 14.000
	 
	 RealTextbox.Name = "RealTextbox"
	 RealTextbox.Parent = Textbox
	 RealTextbox.BackgroundColor3 = Color3.fromRGB(35, 35, 35)
	 RealTextbox.BackgroundTransparency = 0
	 RealTextbox.Position = UDim2.new(0, 230, 0, 4)
	 RealTextbox.Size = UDim2.new(0, 100, 0, 24)
	 RealTextbox.Font = Enum.Font.Code
	 RealTextbox.Text = ""
	 RealTextbox.TextColor3 = Color3.fromRGB(225, 225, 225)
	 RealTextbox.TextSize = 11.000
	 RealTextbox.TextTransparency = 0
	 
	 RealTextbox.FocusLost:Connect(function()
	  callback(RealTextbox.Text)
	  if disappear then
	  RealTextbox.Text = ""
	  end
	  end)
	 
	 UICorner.CornerRadius = UDim.new(0, 5)
	 UICorner.Parent = RealTextbox
	 end
	 function main:Label(text)
	 local Label = Instance.new("TextLabel")
	 local PaddingLabel = Instance.new("UIPadding")
	 local labelfunc = {}
	 
	 Label.Name = "Label"
	 Label.Parent = MainFramePage
	 Label.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 Label.BackgroundTransparency = 1.000
	 Label.Size = UDim2.new(0, 325, 0, 20)
	 Label.Font = Enum.Font.Code
	 Label.TextColor3 = Color3.fromRGB(225, 225, 225)
	 Label.TextSize = 12.000
	 Label.Text = text
	 Label.TextXAlignment = Enum.TextXAlignment.Left
	 
	 PaddingLabel.PaddingLeft = UDim.new(0,15)
	 PaddingLabel.Parent = Label
	 PaddingLabel.Name = "PaddingLabel"
	 
	 function labelfunc:Set(newtext)
	 Label.Text = newtext
	 end
	 return labelfunc
	 end
	 
	 function main:Label1(text)
	 local Label1 = Instance.new("TextLabel")
	 local PaddingLabel1 = Instance.new("UIPadding")
	 local Label1func = {}
	 
	 Label1.Name = "Label1"
	 Label1.Parent = MainFramePage
	 Label1.BackgroundColor3 = Color3.fromRGB(224,224,224)
	 Label1.BackgroundTransparency = 1.000
	 Label1.Size = UDim2.new(0, 325, 0, 20)
	 Label1.Font = Enum.Font.Code
	 Label1.TextColor3 = Color3.fromRGB(225, 225, 225)
	 Label1.TextSize = 12.000
	 Label1.Text = text
	 Label1.TextXAlignment = Enum.TextXAlignment.Left
	 
	 PaddingLabel1.PaddingLeft = UDim.new(0,15)
	 PaddingLabel1.Parent = Label1
	 PaddingLabel1.Name = "PaddingLabel1"
	 function Label1func:Refresh(tochange)
	 Label1.Text = tochange
	 end
	 
	 return Label1func
	 end
	 
	function main:Seperator(text)
	 local Seperator = Instance.new("Frame")
	 local Sep1 = Instance.new("Frame")
	 local Sep2 = Instance.new("TextLabel")
	 local Sep3 = Instance.new("Frame")
	 
	 Seperator.Name = "Seperator"
	 Seperator.Parent = MainFramePage
	 Seperator.BackgroundColor3 = Color3.fromRGB(0,0,0)
	 Seperator.BackgroundTransparency = 1.000
	 Seperator.Size = UDim2.new(0, 290, 0, 20)
	 
	 Sep1.Name = "Sep1"
	 Sep1.Parent = Seperator
	 Sep1.BackgroundColor3 = Color3.fromRGB(0,0,0)
	 Sep1.BorderSizePixel = 0
	 Sep1.Position = UDim2.new(0, 0, 0, 10)
	 Sep1.Size = UDim2.new(0, 80, 0, 1)
	 
	 Sep2.Name = "Sep2"
	 Sep2.Parent = Seperator
	 Sep2.BackgroundColor3 = Color3.fromRGB(0,0,0)
	 Sep2.BackgroundTransparency = 1.000
	 Sep2.Position = UDim2.new(0, 120, 0, 0)
	 Sep2.Size = UDim2.new(0, 80, 0, 20)
	 Sep2.Font = Enum.Font.Code
	 Sep2.Text = text
	 Sep2.TextColor3 = Color3.fromRGB(224,224,224)
	 Sep2.TextSize = 14.000
	 
	 Sep3.Name = "Sep3"
	 Sep3.Parent = Seperator
	 Sep3.BackgroundColor3 = Color3.fromRGB(0,0,0)
	 Sep3.BorderSizePixel = 0
	 Sep3.Position = UDim2.new(0, 240, 0, 10)
	 Sep3.Size = UDim2.new(0, 80, 0, 1)
	 end
	 
	 
	 function main:Line()
	 local Linee = Instance.new("Frame")
	 local Line = Instance.new("Frame")
	 
	 Linee.Name = "Linee"
	 Linee.Parent = MainFramePage
	 Linee.BackgroundColor3 = Color3.fromRGB(0,0,0)
	 Linee.BackgroundTransparency = 1.000
	 Linee.Position = UDim2.new(0, 0, 0.119999997, 0)
	 Linee.Size = UDim2.new(0, 310, 0, 20)
	 
	 Line.Name = "Line"
	 Line.Parent = Linee
	 Line.BackgroundColor3 = Color3.fromRGB(0,0,0)
	 Line.BorderSizePixel = 0
	 Line.Position = UDim2.new(0, 0, 0, 10)
	 Line.Size = UDim2.new(0, 325, 0, 1)
	 end
	 return main
	 end
	 return uitab
	 end
--------------------------------------------------------------------------------------------------------------------------------------------
--tabs
local Library = Update:Window("Min Gaming Hub")
local Sta = Library:Tab("Thông Tin Máy Chủ")
local Main = Library:Tab("Chính")
local Stats = Library:Tab("Chỉ số")
local Island = Library:Tab("Di chuyển")
local Raid = Library:Tab("Tập Kích + Esp")
local Race = Library:Tab("Tộc V4")
local Fruit = Library:Tab("Trái ác quỷ")
local Pvp = Library:Tab("Người Chơi")
local S = Library:Tab("Cửa hàng")
local Misc = Library:Tab("Khác")
print("Script Loading...")
--------------------------------------------------------------------------------------------------------------------------------------------
--Check
Type = 1
spawn(function()
    while wait(.1) do
		if F == 2 then
			Check = CFrame.new(0,0,-200)
		elseif F == 3 then
			Check = CFrame.new(200,100,0)
		elseif F == 4 then
			Check = CFrame.new(0,0,200)	
		elseif F == 5 then
			Check = CFrame.new(-200,100,0)
		elseif F == 6 then
			Check = CFrame.new(0,0,0)
        end
        end
    end)

spawn(function()
    while wait(.1) do
        F = 1
        wait(0.5)
        F = 2
        wait(0.5)
        F = 3
        wait(0.5)
        F = 4
        wait(0.5)
        F = 5
        wait(0.5)
    end
end)
--------------------------------------------------------------------------------------------------------------------------------------------
--config farm
local bringfrec = 225
local posX = 0
local posY = 45
local posZ = 0
local TweenSpeed = 300
--------------------------------------------------------------------------------------------------------------------------------------------
--Status
Sta:Seperator("Cake Prince Status")
local MobKilled = Sta:Label("")
spawn(function()
    while wait() do
        pcall(function()
            if string.len(game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("CakePrinceSpawner")) == 88 then
                MobKilled:Set("Kiểm Tra Katakuri : "..string.sub(game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("CakePrinceSpawner"),39,41))
            elseif string.len(game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("CakePrinceSpawner")) == 87 then
                MobKilled:Set("Kiểm Tra Katakuri : "..string.sub(game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("CakePrinceSpawner"),39,40))
            elseif string.len(game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("CakePrinceSpawner")) == 86 then
                MobKilled:Set("Kiểm Tra Katakuri : "..string.sub(game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("CakePrinceSpawner"),39,39))
            else
                MobKilled:Set("Tư Lệnh Bột: Có")
            end
        end)
    end
end)
Sta:Seperator("Elite Hunter Status")
local Elite_Hunter_Status = Sta:Label("")
spawn(function()
    while wait() do
        pcall(function()
            if game:GetService("ReplicatedStorage"):FindFirstChild("Diablo") or game:GetService("ReplicatedStorage"):FindFirstChild("Deandre") or game:GetService("ReplicatedStorage"):FindFirstChild("Urban") or game:GetService("Workspace").Enemies:FindFirstChild("Diablo") or game:GetService("Workspace").Enemies:FindFirstChild("Deandre") or game:GetService("Workspace").Enemies:FindFirstChild("Urban") then
                Elite_Hunter_Status:Set("Boss Bí Ẩn: Có")	
            else
                Elite_Hunter_Status:Set("Boss Bí Ẩn: Không")	
            end
        end)
    end
end)
Sta:Seperator("Full Moon Status")
local FM = Sta:Label("")
task.spawn(function()
    while task.wait() do
        pcall(function()
            if game:GetService("Lighting").Sky.MoonTextureId=="http://www.roblox.com/asset/?id=9709149431" then
                FM:Set("Status: Trăng Tròn 100%")
            elseif game:GetService("Lighting").Sky.MoonTextureId=="http://www.roblox.com/asset/?id=9709149052" then
                FM:Set("Status: Trăng Tròn 75%")
            elseif game:GetService("Lighting").Sky.MoonTextureId=="http://www.roblox.com/asset/?id=9709143733" then
                FM:Set("Status: Trăng Tròn 50%")
            elseif game:GetService("Lighting").Sky.MoonTextureId=="http://www.roblox.com/asset/?id=9709150401" then
                FM:Set("Status: Trăng Tròn 25%")
            elseif game:GetService("Lighting").Sky.MoonTextureId=="http://www.roblox.com/asset/?id=9709149680" then
                FM:Set("Status: Trăng Tròn 15%")
            else
                FM:Set("Status: Sắp Trăng Tròn")
            end
        end)
    end
end)

Sta:Seperator("Kitsune Island Status")
local StatusKitsune = Sta:Label("")
function UpdateKitsune()
    if game.Workspace._WorldOrigin.Locations:FindFirstChild('Kitsune Island') then
        StatusKitsune:Set("Kitsune Island : Có")
    else
        StatusKitsune:Set("Kitsune Island : Không")
     end
end
spawn(function()
    pcall(function()
        while wait() do
            UpdateKitsune()
        end
    end)
end)
---Settings
     Main:Toggle("Đặt điểm hồi sinh",false, function(setspawnfunc)
            AutoSetSpawn = setspawnfunc
            end)
          spawn(function()
            while wait() do
            if AutoSetSpawn then
            game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("SetSpawnPoint")
            end
            end
            end)
            Main:Toggle("Màn hình trắng",_G.WhiteScreen,function(value)
              _G.WhiteScreen = value
          if _G.WhiteScreen == true then
              game:GetService("RunService"):Set3dRenderingEnabled(false)
          elseif _G.WhiteScreen == false then
              game:GetService("RunService"):Set3dRenderingEnabled(true)
          end
          end)

          _G.AUTOHAKI = true
            Main:Toggle("Bật haki",_G.AUTOHAKI,function(value)
                _G.AUTOHAKI = value
                end)
                spawn(function()
                    while wait(.1) do
                        if _G.AUTOHAKI then 
                            if not game.Players.LocalPlayer.Character:FindFirstChild("HasBuso") then
                                local args = {
                                    [1] = "Buso"
                                }
                                game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer(unpack(args))
                            end
                        end
                    end
                end)


_G.LuaAttack = true    
_G.DelayFast = 0.1
Main:Toggle('Đánh nhanh',_G.LuaAttack,function(famobile)
    _G.LuaAttack = famobile
end)
BringMobs = true
          Main:Toggle("Gom quái", BringMobs, function(bringfunc)
            BringMobs = bringfunc
            end)
            spawn(function()
                while task.wait() do
                    pcall(function()
                        if BringMobs then
                            for i,v in pairs(game.Workspace.Enemies:GetChildren()) do
                                if v.Name == MonFarm and (v.HumanoidRootPart.Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude <= bringfrec then
                                    v.HumanoidRootPart.Size = Vector3.new(50,50,50)
                                    v.HumanoidRootPart.CFrame = FarmPos
                                    v.Humanoid:ChangeState(14)
                                    v.HumanoidRootPart.CanCollide = false
                                    v.Head.CanCollide = false
                                    if v.Humanoid:FindFirstChild("Animator") then
                                        v.Humanoid.Animator:Destroy()
                                     end
                                    sethiddenproperty(game:GetService("Players").LocalPlayer,"SimulationRadius",math.huge)
        
                                end
                            end
                        end
                    end)
                end
            end)
      

          Main:Toggle("Ẩn dame",_G.DisableDamage,function(value)
            _G.DisableDamage = value
           end)
                   spawn(function()
                       while task.wait() do
                           pcall(function()
                               if _G.DisableDamage then
                                   game:GetService("ReplicatedStorage").Assets.GUI.DamageCounter.Enabled = false
                               else
                                   game:GetService("ReplicatedStorage").Assets.GUI.DamageCounter.Enabled = true
                                end
                            end)
                          end
                      end)
--------------------------------------------------------------------------------------------------------------------------------------------
--Main		   
Main:Label("Farming")
Main:Dropdown("Chọn vũ khí",{"Melee","Sword","Blox Fruit","Gun"}, function(value)
    SelectWeapon = value
    
end)
spawn(function()
    while wait() do
    pcall(function()
      if SelectWeapon == "Melee" then
      for i ,v in pairs(game.Players.LocalPlayer.Backpack:GetChildren()) do
      if v.ToolTip == "Melee" then
      if game.Players.LocalPlayer.Backpack:FindFirstChild(tostring(v.Name)) then
      SelectWeapon = v.Name
      end
      end
      end
      elseif SelectWeapon == "Sword" then
      for i ,v in pairs(game.Players.LocalPlayer.Backpack:GetChildren()) do
      if v.ToolTip == "Sword" then
      if game.Players.LocalPlayer.Backpack:FindFirstChild(tostring(v.Name)) then
      SelectWeapon = v.Name
      end
      end
      end
      elseif SelectWeapon == "Devil Fruit" then
      for i ,v in pairs(game.Players.LocalPlayer.Backpack:GetChildren()) do
      if v.ToolTip == "Blox Fruit" then
      if game.Players.LocalPlayer.Backpack:FindFirstChild(tostring(v.Name)) then
      SelectWeapon = v.Name
      end
      end
      end
      elseif SelectWeapon == "Gun" then
      for i ,v in pairs(game.Players.LocalPlayer.Backpack:GetChildren()) do
      if v.ToolTip == "Gun" then
      if game.Players.LocalPlayer.Backpack:FindFirstChild(tostring(v.Name)) then
      SelectWeapon = v.Name
      end
      end
      end
      else
        for i ,v in pairs(game.Players.LocalPlayer.Backpack:GetChildren()) do
      if v.ToolTip == SelectWeapon then
      SelectWeapon = v.Name
      end
      end
      end
      end)
    end
    end)
--------------------------------------------------------------------------------------------------------------------------------------------
--CheckQuest & balabala
local GC = getconnections or get_signal_cons
if GC then
for i,v in pairs(GC(game.Players.LocalPlayer.Idled)) do
if v["Disable"] then
v["Disable"](v)
elseif v["Disconnect"] then
v["Disconnect"](v)
end
end
else
  print("Unlucky.")
local vu = game:GetService("VirtualUser")
game:GetService("Players").LocalPlayer.Idled:connect(function()
  vu:Button2Down(Vector2.new(0,0),workspace.CurrentCamera.CFrame)
  wait(1)
  vu:Button2Up(Vector2.new(0,0),workspace.CurrentCamera.CFrame)
  end)
end
----// BLOX FRUIT
--// Sea world
First_Sea = false
Second_Sea = false
Third_Sea = false
local placeId = game.PlaceId
if placeId == 2753915549 then
First_Sea = true
elseif placeId == 4442272183 then
Second_Sea = true
elseif placeId == 7449423635 then
Third_Sea = true
end
--// Check Monster
function CheckLevel()
    local Lv = game:GetService("Players").LocalPlayer.Data.Level.Value
    if First_Sea then
    if Lv == 1 or Lv <= 9 or SelectMonster == "Bandit" or SelectArea == '' then -- Bandit
    Ms = "Bandit"
    NameQuest = "BanditQuest1"
    QuestLv = 1
    NameMon = "Bandit"
    CFrameQ = CFrame.new(1060.9383544922, 16.455066680908, 1547.7841796875)
    CFrameMon = CFrame.new(1038.5533447266, 41.296249389648, 1576.5098876953)
    elseif Lv == 10 or Lv <= 14 or SelectMonster == "Monkey" or SelectArea == 'Jungle' then -- Monkey
    Ms = "Monkey"
    NameQuest = "JungleQuest"
    QuestLv = 1
    NameMon = "Monkey"
    CFrameQ = CFrame.new(-1601.6553955078, 36.85213470459, 153.38809204102)
    CFrameMon = CFrame.new(-1448.1446533203, 50.851993560791, 63.60718536377)
    elseif Lv == 15 or Lv <= 29 or SelectMonster == "Gorilla" or SelectArea == 'Jungle' then -- Gorilla
    Ms = "Gorilla"
    NameQuest = "JungleQuest"
    QuestLv = 2
    NameMon = "Gorilla"
    CFrameQ = CFrame.new(-1601.6553955078, 36.85213470459, 153.38809204102)
    CFrameMon = CFrame.new(-1142.6488037109, 40.462348937988, -515.39227294922)
    elseif Lv == 30 or Lv <= 39 or SelectMonster == "Pirate" or SelectArea == 'Buggy' then -- Pirate
    Ms = "Pirate"
    NameQuest = "BuggyQuest1"
    QuestLv = 1
    NameMon = "Pirate"
    CFrameQ = CFrame.new(-1140.1761474609, 4.752049446106, 3827.4057617188)
    CFrameMon = CFrame.new(-1201.0881347656, 40.628940582275, 3857.5966796875)
    elseif Lv == 40 or Lv <= 59 or SelectMonster == "Brute" or SelectArea == 'Buggy' then -- Brute
    Ms = "Brute"
    NameQuest = "BuggyQuest1"
    QuestLv = 2
    NameMon = "Brute"
    CFrameQ = CFrame.new(-1140.1761474609, 4.752049446106, 3827.4057617188)
    CFrameMon = CFrame.new(-1387.5324707031, 24.592035293579, 4100.9575195313)
    elseif Lv == 60 or Lv <= 74 or SelectMonster == "Desert Bandit" or SelectArea == 'Desert' then -- Desert Bandit
    Ms = "Desert Bandit"
    NameQuest = "DesertQuest"
    QuestLv = 1
    NameMon = "Desert Bandit"
    CFrameQ = CFrame.new(896.51721191406, 6.4384617805481, 4390.1494140625)
    CFrameMon = CFrame.new(984.99896240234, 16.109552383423, 4417.91015625)
    elseif Lv == 75 or Lv <= 89 or SelectMonster == "Desert Officer" or SelectArea == 'Desert' then -- Desert Officer
    Ms = "Desert Officer"
    NameQuest = "DesertQuest"
    QuestLv = 2
    NameMon = "Desert Officer"
    CFrameQ = CFrame.new(896.51721191406, 6.4384617805481, 4390.1494140625)
    CFrameMon = CFrame.new(1547.1510009766, 14.452038764954, 4381.8002929688)
    elseif Lv == 90 or Lv <= 99 or SelectMonster == "Snow Bandit" or SelectArea == 'Snow' then -- Snow Bandit
    Ms = "Snow Bandit"
    NameQuest = "SnowQuest"
    QuestLv = 1
    NameMon = "Snow Bandit"
    CFrameQ = CFrame.new(1386.8073730469, 87.272789001465, -1298.3576660156)
    CFrameMon = CFrame.new(1356.3028564453, 105.76865386963, -1328.2418212891)
    elseif Lv == 100 or Lv <= 119 or SelectMonster == "Snowman" or SelectArea == 'Snow' then -- Snowman
    Ms = "Snowman"
    NameQuest = "SnowQuest"
    QuestLv = 2
    NameMon = "Snowman"
    CFrameQ = CFrame.new(1386.8073730469, 87.272789001465, -1298.3576660156)
    CFrameMon = CFrame.new(1218.7956542969, 138.01184082031, -1488.0262451172)
    elseif Lv == 120 or Lv <= 149 or SelectMonster == "Chief Petty Officer" or SelectArea == 'Marine' then -- Chief Petty Officer
    Ms = "Chief Petty Officer"
    NameQuest = "MarineQuest2"
    QuestLv = 1
    NameMon = "Chief Petty Officer"
    CFrameQ = CFrame.new(-5035.49609375, 28.677835464478, 4324.1840820313)
    CFrameMon = CFrame.new(-4931.1552734375, 65.793113708496, 4121.8393554688)
    elseif Lv == 150 or Lv <= 174 or SelectMonster == "Sky Bandit" or SelectArea == 'Sky' then -- Sky Bandit
    Ms = "Sky Bandit"
    NameQuest = "SkyQuest"
    QuestLv = 1
    NameMon = "Sky Bandit"
    CFrameQ = CFrame.new(-4842.1372070313, 717.69543457031, -2623.0483398438)
    CFrameMon = CFrame.new(-4955.6411132813, 365.46365356445, -2908.1865234375)
    elseif Lv == 175 or Lv <= 189 or SelectMonster == "Dark Master" or SelectArea == 'Sky' then -- Dark Master
    Ms = "Dark Master"
    NameQuest = "SkyQuest"
    QuestLv = 2
    NameMon = "Dark Master"
    CFrameQ = CFrame.new(-4842.1372070313, 717.69543457031, -2623.0483398438)
    CFrameMon = CFrame.new(-5148.1650390625, 439.04571533203, -2332.9611816406)
    elseif Lv == 190 or Lv <= 209 or SelectMonster == "Prisoner" or SelectArea == 'Prison' then -- Prisoner
    Ms = "Prisoner"
    NameQuest = "PrisonerQuest"
    QuestLv = 1
    NameMon = "Prisoner"
    CFrameQ = CFrame.new(5310.60547, 0.350014925, 474.946594, 0.0175017118, 0, 0.999846935, 0, 1, 0, -0.999846935, 0, 0.0175017118)
    CFrameMon = CFrame.new(4937.31885, 0.332031399, 649.574524, 0.694649816, 0, -0.719348073, 0, 1, 0, 0.719348073, 0, 0.694649816)
    elseif Lv == 210 or Lv <= 249 or SelectMonster == "Dangerous Prisoner" or SelectArea == 'Prison' then -- Dangerous Prisoner
    Ms = "Dangerous Prisoner"
    NameQuest = "PrisonerQuest"
    QuestLv = 2
    NameMon = "Dangerous Prisoner"
    CFrameQ = CFrame.new(5310.60547, 0.350014925, 474.946594, 0.0175017118, 0, 0.999846935, 0, 1, 0, -0.999846935, 0, 0.0175017118)
    CFrameMon = CFrame.new(5099.6626, 0.351562679, 1055.7583, 0.898906827, 0, -0.438139856, 0, 1, 0, 0.438139856, 0, 0.898906827)
    elseif Lv == 250 or Lv <= 274 or SelectMonster == "Toga Warrior" or SelectArea == 'Colosseum' then -- Toga Warrior
    Ms = "Toga Warrior"
    NameQuest = "ColosseumQuest"
    QuestLv = 1
    NameMon = "Toga Warrior"
    CFrameQ = CFrame.new(-1577.7890625, 7.4151420593262, -2984.4838867188)
    CFrameMon = CFrame.new(-1872.5166015625, 49.080215454102, -2913.810546875)
    elseif Lv == 275 or Lv <= 299 or SelectMonster == "Gladiator" or SelectArea == 'Colosseum' then -- Gladiator
    Ms = "Gladiator"
    NameQuest = "ColosseumQuest"
    QuestLv = 2
    NameMon = "Gladiator"
    CFrameQ = CFrame.new(-1577.7890625, 7.4151420593262, -2984.4838867188)
    CFrameMon = CFrame.new(-1521.3740234375, 81.203170776367, -3066.3139648438)
    elseif Lv == 300 or Lv <= 324 or SelectMonster == "Military Soldier" or SelectArea == 'Magma' then -- Military Soldier
    Ms = "Military Soldier"
    NameQuest = "MagmaQuest"
    QuestLv = 1
    NameMon = "Military Soldier"
    CFrameQ = CFrame.new(-5316.1157226563, 12.262831687927, 8517.00390625)
    CFrameMon = CFrame.new(-5369.0004882813, 61.24352645874, 8556.4921875)
    elseif Lv == 325 or Lv <= 374 or SelectMonster == "Military Spy" or SelectArea == 'Magma' then -- Military Spy
    Ms = "Military Spy"
    NameQuest = "MagmaQuest"
    QuestLv = 2
    NameMon = "Military Spy"
    CFrameQ = CFrame.new(-5316.1157226563, 12.262831687927, 8517.00390625)
    CFrameMon = CFrame.new(-5787.00293, 75.8262634, 8651.69922, 0.838590562, 0, -0.544762194, 0, 1, 0, 0.544762194, 0, 0.838590562)
    elseif Lv == 375 or Lv <= 399 or SelectMonster == "Fishman Warrior" or SelectArea == 'Fishman' then -- Fishman Warrior
    Ms = "Fishman Warrior"
    NameQuest = "FishmanQuest"
    QuestLv = 1
    NameMon = "Fishman Warrior"
    CFrameQ = CFrame.new(61122.65234375, 18.497442245483, 1569.3997802734)
    CFrameMon = CFrame.new(60844.10546875, 98.462875366211, 1298.3985595703)
    if getgenv().AutoLevel and (CFrameMon.Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude > 3000 then
    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("requestEntrance",Vector3.new(61163.8515625, 11.6796875, 1819.7841796875))
    end
    elseif Lv == 400 or Lv <= 449 or SelectMonster == "Fishman Commando" or SelectArea == 'Fishman' then -- Fishman Commando
    Ms = "Fishman Commando"
    NameQuest = "FishmanQuest"
    QuestLv = 2
    NameMon = "Fishman Commando"
    CFrameQ = CFrame.new(61122.65234375, 18.497442245483, 1569.3997802734)
    CFrameMon = CFrame.new(61738.3984375, 64.207321166992, 1433.8375244141)
    if getgenv().AutoLevel and (CFrameMon.Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude > 3000 then
    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("requestEntrance",Vector3.new(61163.8515625, 11.6796875, 1819.7841796875))
    end
    elseif Lv == 10 or Lv <= 474 or SelectMonster == "God's Guard" or SelectArea == 'Sky Island' then -- God's Guard
    Ms = "God's Guard"
    NameQuest = "SkyExp1Quest"
    QuestLv = 1
    NameMon = "God's Guard"
    CFrameQ = CFrame.new(-4721.8603515625, 845.30297851563, -1953.8489990234)
    CFrameMon = CFrame.new(-4628.0498046875, 866.92877197266, -1931.2352294922)
    if getgenv().AutoLevel and (CFrameMon.Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude > 3000 then
    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("requestEntrance",Vector3.new(-4607.82275, 872.54248, -1667.55688))
    end
    elseif Lv == 475 or Lv <= 524 or SelectMonster == "Shanda" or SelectArea == 'Sky Island' then -- Shanda
    Ms = "Shanda"
    NameQuest = "SkyExp1Quest"
    QuestLv = 2
    NameMon = "Shanda"
    CFrameQ = CFrame.new(-7863.1596679688, 5545.5190429688, -378.42266845703)
    CFrameMon = CFrame.new(-7685.1474609375, 5601.0751953125, -441.38876342773)
    if getgenv().AutoLevel and (CFrameMon.Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude > 3000 then
    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("requestEntrance",Vector3.new(-7894.6176757813, 5547.1416015625, -380.29119873047))
    end
    elseif Lv == 525 or Lv <= 549 or SelectMonster == "Royal Squad" or SelectArea == 'Sky Island' then -- Royal Squad
    Ms = "Royal Squad"
    NameQuest = "SkyExp2Quest"
    QuestLv = 1
    NameMon = "Royal Squad"
    CFrameQ = CFrame.new(-7903.3828125, 5635.9897460938, -1410.923828125)
    CFrameMon = CFrame.new(-7654.2514648438, 5637.1079101563, -1407.7550048828)
    elseif Lv == 550 or Lv <= 624 or SelectMonster == "Royal Soldier" or SelectArea == 'Sky Island' then -- Royal Soldier
    Ms = "Royal Soldier"
    NameQuest = "SkyExp2Quest"
    QuestLv = 2
    NameMon = "Royal Soldier"
    CFrameQ = CFrame.new(-7903.3828125, 5635.9897460938, -1410.923828125)
    CFrameMon = CFrame.new(-7760.4106445313, 5679.9077148438, -1884.8112792969)
    elseif Lv == 625 or Lv <= 649 or SelectMonster == "Galley Pirate" or SelectArea == 'Fountain' then -- Galley Pirate
    Ms = "Galley Pirate"
    NameQuest = "FountainQuest"
    QuestLv = 1
    NameMon = "Galley Pirate"
    CFrameQ = CFrame.new(5258.2788085938, 38.526931762695, 4050.044921875)
    CFrameMon = CFrame.new(5557.1684570313, 152.32717895508, 3998.7758789063)
    elseif Lv >= 650 or SelectMonster == "Galley Captain" or SelectArea == 'Fountain' then -- Galley Captain
    Ms = "Galley Captain"
    NameQuest = "FountainQuest"
    QuestLv = 2
    NameMon = "Galley Captain"
    CFrameQ = CFrame.new(5258.2788085938, 38.526931762695, 4050.044921875)
    CFrameMon = CFrame.new(5677.6772460938, 92.786109924316, 4966.6323242188)
    end
    end
    if Second_Sea then
    if Lv == 700 or Lv <= 724 or SelectMonster == "Raider" or SelectArea == 'Area 1' then -- Raider
    Ms = "Raider"
    NameQuest = "Area1Quest"
    QuestLv = 1
    NameMon = "Raider"
    CFrameQ = CFrame.new(-427.72567749023, 72.99634552002, 1835.9426269531)
    CFrameMon = CFrame.new(68.874565124512, 93.635643005371, 2429.6752929688)
    elseif Lv == 725 or Lv <= 774 or SelectMonster == "Mercenary" or SelectArea == 'Area 1' then -- Mercenary
    Ms = "Mercenary"
    NameQuest = "Area1Quest"
    QuestLv = 2
    NameMon = "Mercenary"
    CFrameQ = CFrame.new(-427.72567749023, 72.99634552002, 1835.9426269531)
    CFrameMon = CFrame.new(-864.85009765625, 122.47104644775, 1453.1505126953)
    elseif Lv == 775 or Lv <= 799 or SelectMonster == "Swan Pirate" or SelectArea == 'Area 2' then -- Swan Pirate
    Ms = "Swan Pirate"
    NameQuest = "Area2Quest"
    QuestLv = 1
    NameMon = "Swan Pirate"
    CFrameQ = CFrame.new(635.61151123047, 73.096351623535, 917.81298828125)
    CFrameMon = CFrame.new(1065.3669433594, 137.64012145996, 1324.3798828125)
    elseif Lv == 800 or Lv <= 874 or SelectMonster == "Factory Staff" or SelectArea == 'Area 2' then -- Factory Staff
    Ms = "Factory Staff"
    NameQuest = "Area2Quest"
    QuestLv = 2
    NameMon = "Factory Staff"
    CFrameQ = CFrame.new(635.61151123047, 73.096351623535, 917.81298828125)
    CFrameMon = CFrame.new(533.22045898438, 128.46876525879, 355.62615966797)
    elseif Lv == 875 or Lv <= 899 or SelectMonster == "Marine Lieutenan" or SelectArea == 'Marine' then -- Marine Lieutenant
    Ms = "Marine Lieutenant"
    NameQuest = "MarineQuest3"
    QuestLv = 1
    NameMon = "Marine Lieutenant"
    CFrameQ = CFrame.new(-2440.9934082031, 73.04190826416, -3217.7082519531)
    CFrameMon = CFrame.new(-2489.2622070313, 84.613594055176, -3151.8830566406)
    elseif Lv == 900 or Lv <= 949 or SelectMonster == "Marine Captain" or SelectArea == 'Marine' then -- Marine Captain
    Ms = "Marine Captain"
    NameQuest = "MarineQuest3"
    QuestLv = 2
    NameMon = "Marine Captain"
    CFrameQ = CFrame.new(-2440.9934082031, 73.04190826416, -3217.7082519531)
    CFrameMon = CFrame.new(-2335.2026367188, 79.786659240723, -3245.8674316406)
    elseif Lv == 950 or Lv <= 974 or SelectMonster == "Zombie" or SelectArea == 'Zombie' then -- Zombie
    Ms = "Zombie"
    NameQuest = "ZombieQuest"
    QuestLv = 1
    NameMon = "Zombie"
    CFrameQ = CFrame.new(-5494.3413085938, 48.505931854248, -794.59094238281)
    CFrameMon = CFrame.new(-5536.4970703125, 101.08577728271, -835.59075927734)
    elseif Lv == 975 or Lv <= 999 or SelectMonster == "Vampire" or SelectArea == 'Zombie' then -- Vampire
    Ms = "Vampire"
    NameQuest = "ZombieQuest"
    QuestLv = 2
    NameMon = "Vampire"
    CFrameQ = CFrame.new(-5494.3413085938, 48.505931854248, -794.59094238281)
    CFrameMon = CFrame.new(-5806.1098632813, 16.722528457642, -1164.4384765625)
    elseif Lv == 1000 or Lv <= 1049 or SelectMonster == "Snow Trooper" or SelectArea == 'Snow Mountain' then -- Snow Trooper
    Ms = "Snow Trooper"
    NameQuest = "SnowMountainQuest"
    QuestLv = 1
    NameMon = "Snow Trooper"
    CFrameQ = CFrame.new(607.05963134766, 401.44781494141, -5370.5546875)
    CFrameMon = CFrame.new(535.21051025391, 432.74209594727, -5484.9165039063)
    elseif Lv == 1050 or Lv <= 1099 or SelectMonster == "Winter Warrior" or SelectArea == 'Snow Mountain' then -- Winter Warrior
    Ms = "Winter Warrior"
    NameQuest = "SnowMountainQuest"
    QuestLv = 2
    NameMon = "Winter Warrior"
    CFrameQ = CFrame.new(607.05963134766, 401.44781494141, -5370.5546875)
    CFrameMon = CFrame.new(1234.4449462891, 456.95419311523, -5174.130859375)
    elseif Lv == 1100 or Lv <= 1124 or SelectMonster == "Lab Subordinate" or SelectArea == 'Ice Fire' then -- Lab Subordinate
    Ms = "Lab Subordinate"
    NameQuest = "IceSideQuest"
    QuestLv = 1
    NameMon = "Lab Subordinate"
    CFrameQ = CFrame.new(-6061.841796875, 15.926671981812, -4902.0385742188)
    CFrameMon = CFrame.new(-5720.5576171875, 63.309471130371, -4784.6103515625)
    elseif Lv == 1125 or Lv <= 1174 or SelectMonster == "Horned Warrior" or SelectArea == 'Ice Fire' then -- Horned Warrior
    Ms = "Horned Warrior"
    NameQuest = "IceSideQuest"
    QuestLv = 2
    NameMon = "Horned Warrior"
    CFrameQ = CFrame.new(-6061.841796875, 15.926671981812, -4902.0385742188)
    CFrameMon = CFrame.new(-6292.751953125, 91.181983947754, -5502.6499023438)
    elseif Lv == 1175 or Lv <= 1199 or SelectMonster == "Magma Ninja" or SelectArea == 'Ice Fire' then -- Magma Ninja
    Ms = "Magma Ninja"
    NameQuest = "FireSideQuest"
    QuestLv = 1
    NameMon = "Magma Ninja"
    CFrameQ = CFrame.new(-5429.0473632813, 15.977565765381, -5297.9614257813)
    CFrameMon = CFrame.new(-5461.8388671875, 130.36347961426, -5836.4702148438)
    elseif Lv == 1200 or Lv <= 1249 or SelectMonster == "Lava Pirate" or SelectArea == 'Ice Fire' then -- Lava Pirate
    Ms = "Lava Pirate"
    NameQuest = "FireSideQuest"
    QuestLv = 2
    NameMon = "Lava Pirate"
    CFrameQ = CFrame.new(-5429.0473632813, 15.977565765381, -5297.9614257813)
    CFrameMon = CFrame.new(-5251.1889648438, 55.164535522461, -4774.4096679688)
    elseif Lv == 1250 or Lv <= 1274 or SelectMonster == "Ship Deckhand" or SelectArea == 'Ship' then -- Ship Deckhand
    Ms = "Ship Deckhand"
    NameQuest = "ShipQuest1"
    QuestLv = 1
    NameMon = "Ship Deckhand"
    CFrameQ = CFrame.new(1040.2927246094, 125.08293151855, 32911.0390625)
    CFrameMon = CFrame.new(921.12365722656, 125.9839553833, 33088.328125)
    if getgenv().AutoLevel and (CFrameMon.Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude > 20000 then
    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("requestEntrance",Vector3.new(923.21252441406, 126.9760055542, 32852.83203125))
    end
    elseif Lv == 1275 or Lv <= 1299 or SelectMonster == "Ship Engineer" or SelectArea == 'Ship' then -- Ship Engineer
    Ms = "Ship Engineer"
    NameQuest = "ShipQuest1"
    QuestLv = 2
    NameMon = "Ship Engineer"
    CFrameQ = CFrame.new(1040.2927246094, 125.08293151855, 32911.0390625)
    CFrameMon = CFrame.new(886.28179931641, 40.47790145874, 32800.83203125)
    if getgenv().AutoLevel and (CFrameMon.Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude > 20000 then
    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("requestEntrance",Vector3.new(923.21252441406, 126.9760055542, 32852.83203125))
    end
    elseif Lv == 1300 or Lv <= 1324 or SelectMonster == "Ship Steward" or SelectArea == 'Ship' then -- Ship Steward
    Ms = "Ship Steward"
    NameQuest = "ShipQuest2"
    QuestLv = 1
    NameMon = "Ship Steward"
    CFrameQ = CFrame.new(971.42065429688, 125.08293151855, 33245.54296875)
    CFrameMon = CFrame.new(943.85504150391, 129.58183288574, 33444.3671875)
    if getgenv().AutoLevel and (CFrameMon.Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude > 20000 then
    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("requestEntrance",Vector3.new(923.21252441406, 126.9760055542, 32852.83203125))
    end
    elseif Lv == 1325 or Lv <= 1349 or SelectMonster == "Ship Officer" or SelectArea == 'Ship' then -- Ship Officer
    Ms = "Ship Officer"
    NameQuest = "ShipQuest2"
    QuestLv = 2
    NameMon = "Ship Officer"
    CFrameQ = CFrame.new(971.42065429688, 125.08293151855, 33245.54296875)
    CFrameMon = CFrame.new(955.38458251953, 181.08335876465, 33331.890625)
    if getgenv().AutoLevel and (CFrameMon.Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude > 20000 then
    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("requestEntrance",Vector3.new(923.21252441406, 126.9760055542, 32852.83203125))
    end
    elseif Lv == 1350 or Lv <= 1374 or SelectMonster == "Arctic Warrior" or SelectArea == 'Frost' then -- Arctic Warrior
    Ms = "Arctic Warrior"
    NameQuest = "FrostQuest"
    QuestLv = 1
    NameMon = "Arctic Warrior"
    CFrameQ = CFrame.new(5668.1372070313, 28.202531814575, -6484.6005859375)
    CFrameMon = CFrame.new(5935.4541015625, 77.26016998291, -6472.7568359375)
    if getgenv().AutoLevel and (CFrameMon.Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude > 20000 then
    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("requestEntrance",Vector3.new(-6508.5581054688, 89.034996032715, -132.83953857422))
    end
    elseif Lv == 1375 or Lv <= 1424 or SelectMonster == "Snow Lurker" or SelectArea == 'Frost' then -- Snow Lurker
    Ms = "Snow Lurker"
    NameQuest = "FrostQuest"
    QuestLv = 2
    NameMon = "Snow Lurker"
    CFrameQ = CFrame.new(5668.1372070313, 28.202531814575, -6484.6005859375)
    CFrameMon = CFrame.new(5628.482421875, 57.574996948242, -6618.3481445313)
    elseif Lv == 1425 or Lv <= 1449 or SelectMonster == "Sea Soldier" or SelectArea == 'Forgotten' then -- Sea Soldier
    Ms = "Sea Soldier"
    NameQuest = "ForgottenQuest"
    QuestLv = 1
    NameMon = "Sea Soldier"
    CFrameQ = CFrame.new(-3054.5827636719, 236.87213134766, -10147.790039063)
    CFrameMon = CFrame.new(-3185.0153808594, 58.789089202881, -9663.6064453125)
    elseif Lv >= 1450 or SelectMonster == "Water Fighter" or SelectArea == 'Forgotten' then -- Water Fighter
    Ms = "Water Fighter"
    NameQuest = "ForgottenQuest"
    QuestLv = 2
    NameMon = "Water Fighter"
    CFrameQ = CFrame.new(-3054.5827636719, 236.87213134766, -10147.790039063)
    CFrameMon = CFrame.new(-3262.9301757813, 298.69036865234, -10552.529296875)
    end
    end
    if Third_Sea then
    if Lv == 1500 or Lv <= 1524 or SelectMonster == "Pirate Millionaire" or SelectArea == 'Pirate Port' then -- Pirate Millionaire
    Ms = "Pirate Millionaire"
    NameQuest = "PiratePortQuest"
    QuestLv = 1
    NameMon = "Pirate Millionaire"
    CFrameQ = CFrame.new(-289.61752319336, 43.819011688232, 5580.0903320313)
    CFrameMon = CFrame.new(-435.68109130859, 189.69866943359, 5551.0756835938)
    elseif Lv == 1525 or Lv <= 1574 or SelectMonster == "Pistol Billionaire" or SelectArea == 'Pirate Port' then -- Pistol Billoonaire
    Ms = "Pistol Billionaire"
    NameQuest = "PiratePortQuest"
    QuestLv = 2
    NameMon = "Pistol Billionaire"
    CFrameQ = CFrame.new(-289.61752319336, 43.819011688232, 5580.0903320313)
    CFrameMon = CFrame.new(-236.53652954102, 217.46676635742, 6006.0883789063)
    elseif Lv == 1575 or Lv <= 1599 or SelectMonster == "Dragon Crew Warrior" or SelectArea == 'Amazon' then -- Dragon Crew Warrior
    Ms = "Dragon Crew Warrior"
    NameQuest = "AmazonQuest"
    QuestLv = 1
    NameMon = "Dragon Crew Warrior"
    CFrameQ = CFrame.new(5833.1147460938, 51.60498046875, -1103.0693359375)
    CFrameMon = CFrame.new(6301.9975585938, 104.77153015137, -1082.6075439453)
    elseif Lv == 1600 or Lv <= 1624 or SelectMonster == "Dragon Crew Archer" or SelectArea == 'Amazon' then -- Dragon Crew Archer
    Ms = "Dragon Crew Archer"
    NameQuest = "AmazonQuest"
    QuestLv = 2
    NameMon = "Dragon Crew Archer"
    CFrameQ = CFrame.new(5833.1147460938, 51.60498046875, -1103.0693359375)
    CFrameMon = CFrame.new(6831.1171875, 441.76708984375, 446.58615112305)
    elseif Lv == 1625 or Lv <= 1649 or SelectMonster == "Female Islander" or SelectArea == 'Amazon' then -- Female Islander
    Ms = "Female Islander"
    NameQuest = "AmazonQuest2"
    QuestLv = 1
    NameMon = "Female Islander"
    CFrameQ = CFrame.new(5446.8793945313, 601.62945556641, 749.45672607422)
    CFrameMon = CFrame.new(5792.5166015625, 848.14392089844, 1084.1818847656)
    elseif Lv == 1650 or Lv <= 1699 or SelectMonster == "Giant Islander" or SelectArea == 'Amazon' then -- Giant Islander
    Ms = "Giant Islander"
    NameQuest = "AmazonQuest2"
    QuestLv = 2
    NameMon = "Giant Islander"
    CFrameQ = CFrame.new(5446.8793945313, 601.62945556641, 749.45672607422)
    CFrameMon = CFrame.new(5009.5068359375, 664.11071777344, -40.960144042969)
    elseif Lv == 1700 or Lv <= 1724 or SelectMonster == "Marine Commodore" or SelectArea == 'Marine Tree' then -- Marine Commodore
    Ms = "Marine Commodore"
    NameQuest = "MarineTreeIsland"
    QuestLv = 1
    NameMon = "Marine Commodore"
    CFrameQ = CFrame.new(2179.98828125, 28.731239318848, -6740.0551757813)
    CFrameMon = CFrame.new(2198.0063476563, 128.71075439453, -7109.5043945313)
    elseif Lv == 1725 or Lv <= 1774 or SelectMonster == "Marine Rear Admiral" or SelectArea == 'Marine Tree' then -- Marine Rear Admiral
    Ms = "Marine Rear Admiral"
    NameQuest = "MarineTreeIsland"
    QuestLv = 2
    NameMon = "Marine Rear Admiral"
    CFrameQ = CFrame.new(2179.98828125, 28.731239318848, -6740.0551757813)
    CFrameMon = CFrame.new(3294.3142089844, 385.41125488281, -7048.6342773438)
    elseif Lv == 1775 or Lv <= 1799 or SelectMonster == "Fishman Raider" or SelectArea == 'Deep Forest' then -- Fishman Raide
    Ms = "Fishman Raider"
    NameQuest = "DeepForestIsland3"
    QuestLv = 1
    NameMon = "Fishman Raider"
    CFrameQ = CFrame.new(-10582.759765625, 331.78845214844, -8757.666015625)
    CFrameMon = CFrame.new(-10553.268554688, 521.38439941406, -8176.9458007813)
    elseif Lv == 1800 or Lv <= 1824 or SelectMonster == "Fishman Captain" or SelectArea == 'Deep Forest' then -- Fishman Captain
    Ms = "Fishman Captain"
    NameQuest = "DeepForestIsland3"
    QuestLv = 2
    NameMon = "Fishman Captain"
    CFrameQ = CFrame.new(-10583.099609375, 331.78845214844, -8759.4638671875)
    CFrameMon = CFrame.new(-10789.401367188, 427.18637084961, -9131.4423828125)
    elseif Lv == 1825 or Lv <= 1849 or SelectMonster == "Forest Pirate" or SelectArea == 'Deep Forest' then -- Forest Pirate
    Ms = "Forest Pirate"
    NameQuest = "DeepForestIsland"
    QuestLv = 1
    NameMon = "Forest Pirate"
    CFrameQ = CFrame.new(-13232.662109375, 332.40396118164, -7626.4819335938)
    CFrameMon = CFrame.new(-13489.397460938, 400.30349731445, -7770.251953125)
    elseif Lv == 1850 or Lv <= 1899 or SelectMonster == "Mythological Pirate" or SelectArea == 'Deep Forest' then -- Mythological Pirate
    Ms = "Mythological Pirate"
    NameQuest = "DeepForestIsland"
    QuestLv = 2
    NameMon = "Mythological Pirate"
    CFrameQ = CFrame.new(-13232.662109375, 332.40396118164, -7626.4819335938)
    CFrameMon = CFrame.new(-13508.616210938, 582.46228027344, -6985.3037109375)
    elseif Lv == 1900 or Lv <= 1924 or SelectMonster == "Jungle Pirate" or SelectArea == 'Deep Forest' then -- Jungle Pirate
    Ms = "Jungle Pirate"
    NameQuest = "DeepForestIsland2"
    QuestLv = 1
    NameMon = "Jungle Pirate"
    CFrameQ = CFrame.new(-12682.096679688, 390.88653564453, -9902.1240234375)
    CFrameMon = CFrame.new(-12267.103515625, 459.75262451172, -10277.200195313)
    elseif Lv == 1925 or Lv <= 1974 or SelectMonster == "Musketeer Pirate" or SelectArea == 'Deep Forest' then -- Musketeer Pirate
    Ms = "Musketeer Pirate"
    NameQuest = "DeepForestIsland2"
    QuestLv = 2
    NameMon = "Musketeer Pirate"
    CFrameQ = CFrame.new(-12682.096679688, 390.88653564453, -9902.1240234375)
    CFrameMon = CFrame.new(-13291.5078125, 520.47338867188, -9904.638671875)
    elseif Lv == 1975 or Lv <= 1999 or SelectMonster == "Reborn Skeleton" or SelectArea == 'Haunted Castle' then
    Ms = "Reborn Skeleton"
    NameQuest = "HauntedQuest1"
    QuestLv = 1
    NameMon = "Reborn Skeleton"
    CFrameQ = CFrame.new(-9480.80762, 142.130661, 5566.37305, -0.00655503059, 4.52954225e-08, -0.999978542, 2.04920472e-08, 1, 4.51620679e-08, 0.999978542, -2.01955679e-08, -0.00655503059)
    CFrameMon = CFrame.new(-8761.77148, 183.431747, 6168.33301, 0.978073597, -1.3950732e-05, -0.208259016, -1.08073925e-06, 1, -7.20630269e-05, 0.208259016, 7.07080399e-05, 0.978073597)
    elseif Lv == 2000 or Lv <= 2024 or SelectMonster == "Living Zombie" or SelectArea == 'Haunted Castle' then
    Ms = "Living Zombie"
    NameQuest = "HauntedQuest1"
    QuestLv = 2
    NameMon = "Living Zombie"
    CFrameQ = CFrame.new(-9480.80762, 142.130661, 5566.37305, -0.00655503059, 4.52954225e-08, -0.999978542, 2.04920472e-08, 1, 4.51620679e-08, 0.999978542, -2.01955679e-08, -0.00655503059)
    CFrameMon = CFrame.new(-10103.7529, 238.565979, 6179.75977, 0.999474227, 2.77547141e-08, 0.0324240364, -2.58006327e-08, 1, -6.06848474e-08, -0.0324240364, 5.98163865e-08, 0.999474227)
    elseif Lv == 2025 or Lv <= 2049 or SelectMonster == "Demonic Soul" or SelectArea == 'Haunted Castle' then
    Ms = "Demonic Soul"
    NameQuest = "HauntedQuest2"
    QuestLv = 1
    NameMon = "Demonic Soul"
    CFrameQ = CFrame.new(-9516.9931640625, 178.00651550293, 6078.4653320313)
    CFrameMon = CFrame.new(-9712.03125, 204.69589233398, 6193.322265625)
    elseif Lv == 2050 or Lv <= 2074 or SelectMonster == "Posessed Mummy" or SelectArea == 'Haunted Castle' then
    Ms = "Posessed Mummy"
    NameQuest = "HauntedQuest2"
    QuestLv = 2
    NameMon = "Posessed Mummy"
    CFrameQ = CFrame.new(-9516.9931640625, 178.00651550293, 6078.4653320313)
    CFrameMon = CFrame.new(-9545.7763671875, 69.619895935059, 6339.5615234375)
    elseif Lv == 2075 or Lv <= 2099 or SelectMonster == "Peanut Scout" or SelectArea == 'Nut Island' then
    Ms = "Peanut Scout"
    NameQuest = "NutsIslandQuest"
    QuestLv = 1
    NameMon = "Peanut Scout"
    CFrameQ = CFrame.new(-2105.53198, 37.2495995, -10195.5088, -0.766061664, 0, -0.642767608, 0, 1, 0, 0.642767608, 0, -0.766061664)
    CFrameMon = CFrame.new(-2150.587890625, 122.49767303467, -10358.994140625)
    elseif Lv == 2100 or Lv <= 2124 or SelectMonster == "Peanut President" or SelectArea == 'Nut Island' then
    Ms = "Peanut President"
    NameQuest = "NutsIslandQuest"
    QuestLv = 2
    NameMon = "Peanut President"
    CFrameQ = CFrame.new(-2105.53198, 37.2495995, -10195.5088, -0.766061664, 0, -0.642767608, 0, 1, 0, 0.642767608, 0, -0.766061664)
    CFrameMon = CFrame.new(-2150.587890625, 122.49767303467, -10358.994140625)
    elseif Lv == 2125 or Lv <= 2149 or SelectMonster == "Ice Cream Chef" or SelectArea == 'Ice Cream Island' then
    Ms = "Ice Cream Chef"
    NameQuest = "IceCreamIslandQuest"
    QuestLv = 1
    NameMon = "Ice Cream Chef"
    CFrameQ = CFrame.new(-819.376709, 64.9259796, -10967.2832, -0.766061664, 0, 0.642767608, 0, 1, 0, -0.642767608, 0, -0.766061664)
    CFrameMon = CFrame.new(-789.941528, 209.382889, -11009.9805, -0.0703101531, -0, -0.997525156, -0, 1.00000012, -0, 0.997525275, 0, -0.0703101456)
    elseif Lv == 2150 or Lv <= 2199 or SelectMonster == "Ice Cream Commander" or SelectArea == 'Ice Cream Island' then
    Ms = "Ice Cream Commander"
    NameQuest = "IceCreamIslandQuest"
    QuestLv = 2
    NameMon = "Ice Cream Commander"
    CFrameQ = CFrame.new(-819.376709, 64.9259796, -10967.2832, -0.766061664, 0, 0.642767608, 0, 1, 0, -0.642767608, 0, -0.766061664)
    CFrameMon = CFrame.new(-789.941528, 209.382889, -11009.9805, -0.0703101531, -0, -0.997525156, -0, 1.00000012, -0, 0.997525275, 0, -0.0703101456)
    elseif Lv == 2200 or Lv <= 2224 or SelectMonster == "Cookie Crafter" or SelectArea == 'Cake Island' then
    Ms = "Cookie Crafter"
    NameQuest = "CakeQuest1"
    QuestLv = 1
    NameMon = "Cookie Crafter"
    CFrameQ = CFrame.new(-2022.29858, 36.9275894, -12030.9766, -0.961273909, 0, -0.275594592, 0, 1, 0, 0.275594592, 0, -0.961273909)
    CFrameMon = CFrame.new(-2321.71216, 36.699482, -12216.7871, -0.780074954, 0, 0.625686109, 0, 1, 0, -0.625686109, 0, -0.780074954)
    elseif Lv == 2225 or Lv <= 2249 or SelectMonster == "Cake Guard" or SelectArea == 'Cake Island' then
    Ms = "Cake Guard"
    NameQuest = "CakeQuest1"
    QuestLv = 2
    NameMon = "Cake Guard"
    CFrameQ = CFrame.new(-2022.29858, 36.9275894, -12030.9766, -0.961273909, 0, -0.275594592, 0, 1, 0, 0.275594592, 0, -0.961273909)
    CFrameMon = CFrame.new(-1418.11011, 36.6718941, -12255.7324, 0.0677844882, 0, 0.997700036, 0, 1, 0, -0.997700036, 0, 0.0677844882)
    elseif Lv == 2250 or Lv <= 2274 or SelectMonster == "Baking Staff" or SelectArea == 'Cake Island' then
    Ms = "Baking Staff"
    NameQuest = "CakeQuest2"
    QuestLv = 1
    NameMon = "Baking Staff"
    CFrameQ = CFrame.new(-1928.31763, 37.7296638, -12840.626, 0.951068401, -0, -0.308980465, 0, 1, -0, 0.308980465, 0, 0.951068401)
    CFrameMon = CFrame.new(-1980.43848, 36.6716766, -12983.8418, -0.254443765, 0, -0.967087567, 0, 1, 0, 0.967087567, 0, -0.254443765)
    elseif Lv == 2275 or Lv <= 2299 or SelectMonster == "Head Baker" or SelectArea == 'Cake Island' then
    Ms = "Head Baker"
    NameQuest = "CakeQuest2"
    QuestLv = 2
    NameMon = "Head Baker"
    CFrameQ = CFrame.new(-1928.31763, 37.7296638, -12840.626, 0.951068401, -0, -0.308980465, 0, 1, -0, 0.308980465, 0, 0.951068401)
    CFrameMon = CFrame.new(-2251.5791, 52.2714615, -13033.3965, -0.991971016, 0, -0.126466095, 0, 1, 0, 0.126466095, 0, -0.991971016)
    elseif Lv == 2300 or Lv <= 2324 or SelectMonster == "Cocoa Warrior" or SelectArea == 'Choco Island' then
    Ms = "Cocoa Warrior"
    NameQuest = "ChocQuest1"
    QuestLv = 1
    NameMon = "Cocoa Warrior"
    CFrameQ = CFrame.new(231.75, 23.9003029, -12200.292, -1, 0, 0, 0, 1, 0, 0, 0, -1)
    CFrameMon = CFrame.new(167.978516, 26.2254658, -12238.874, -0.939700961, 0, 0.341998369, 0, 1, 0, -0.341998369, 0, -0.939700961)
    elseif Lv == 2325 or Lv <= 2349 or SelectMonster == "Chocolate Bar Battler" or SelectArea == 'Choco Island' then
    Ms = "Chocolate Bar Battler"
    NameQuest = "ChocQuest1"
    QuestLv = 2
    NameMon = "Chocolate Bar Battler"
    CFrameQ = CFrame.new(231.75, 23.9003029, -12200.292, -1, 0, 0, 0, 1, 0, 0, 0, -1)
    CFrameMon = CFrame.new(701.312073, 25.5824986, -12708.2148, -0.342042685, 0, -0.939684391, 0, 1, 0, 0.939684391, 0, -0.342042685)
    elseif Lv == 2350 or Lv <= 2374 or SelectMonster == "Sweet Thief" or SelectArea == 'Choco Island' then
    Ms = "Sweet Thief"
    NameQuest = "ChocQuest2"
    QuestLv = 1
    NameMon = "Sweet Thief"
    CFrameQ = CFrame.new(151.198242, 23.8907146, -12774.6172, 0.422592998, 0, 0.906319618, 0, 1, 0, -0.906319618, 0, 0.422592998)
    CFrameMon = CFrame.new(-140.258301, 25.5824986, -12652.3115, 0.173624337, -0, -0.984811902, 0, 1, -0, 0.984811902, 0, 0.173624337)
    elseif Lv == 2375 or Lv <= 2400 or SelectMonster == "Candy Rebel" or SelectArea == 'Choco Island' then
    Ms = "Candy Rebel"
    NameQuest = "ChocQuest2"
    QuestLv = 2
    NameMon = "Candy Rebel"
    CFrameQ = CFrame.new(151.198242, 23.8907146, -12774.6172, 0.422592998, 0, 0.906319618, 0, 1, 0, -0.906319618, 0, 0.422592998)
    CFrameMon = CFrame.new(47.9231453, 25.5824986, -13029.2402, -0.819156051, 0, -0.573571265, 0, 1, 0, 0.573571265, 0, -0.819156051)
    elseif Lv == 2400 or Lv <= 2424 or SelectMonster == "Candy Pirate" or SelectArea == 'Candy Island' then
    Ms = "Candy Pirate"
    NameQuest = "CandyQuest1"
    QuestLv = 1
    NameMon = "Candy Pirate"
    CFrameQ = CFrame.new(-1149.328, 13.5759039, -14445.6143, -0.156446099, 0, -0.987686574, 0, 1, 0, 0.987686574, 0, -0.156446099)
    CFrameMon = CFrame.new(-1437.56348, 17.1481285, -14385.6934, 0.173624337, -0, -0.984811902, 0, 1, -0, 0.984811902, 0, 0.173624337)
    elseif Lv == 2425 or Lv <= 2449 or SelectMonster == "Snow Demon" or SelectArea == 'Candy Island' then
    Ms = "Snow Demon"
    NameQuest = "CandyQuest1"
    QuestLv = 2
    NameMon = "Snow Demon"
    CFrameQ = CFrame.new(-1149.328, 13.5759039, -14445.6143, -0.156446099, 0, -0.987686574, 0, 1, 0, 0.987686574, 0, -0.156446099)
    CFrameMon = CFrame.new(-916.222656, 17.1481285, -14638.8125, 0.866007268, 0, 0.500031412, 0, 1, 0, -0.500031412, 0, 0.866007268)
    elseif Lv == 2450 or Lv <= 2474 or SelectMonster == "Isle Outlaw" or SelectArea == 'Tiki Outpost' then
    Ms = "Isle Outlaw"
    NameQuest = "TikiQuest1"
    QuestLv = 1
    NameMon = "Isle Outlaw"
    CFrameQ = CFrame.new(-16549.890625, 55.68635559082031, -179.91360473632812)
    CFrameMon = CFrame.new(-16162.8193359375, 11.6863374710083, -96.45481872558594)
    elseif Lv == 2475 or Lv <= 2499 or SelectMonster == "Island Boy" or SelectArea == 'Tiki Outpost' then 
    Ms = "Island Boy"
    NameQuest = "TikiQuest1"
    QuestLv = 2
    NameMon = "Island Boy"
    CFrameQ = CFrame.new(-16549.890625, 55.68635559082031, -179.91360473632812)
    CFrameMon = CFrame.new(-16912.130859375, 11.787443161010742, -133.0850830078125)
    elseif Lv == 2500 or Lv <= 2424 then
    Ms = "Sun-kissed Warrior"
    QuestLv = 1
    NameQuest = "TikiQuest2"
    NameMon = "kissed"
    CFrameQ = CFrame.new(-16539.078125, 55.68632888793945, 1051.5738525390625)
    CFrameMon = CFrame.new(-16349.8779296875, 92.0808334350586, 1123.4169921875)
    elseif Lv >= 2525 or SelectMonster == "Isle Champion" or SelectArea == 'Tiki Outpost' then
    Ms = "Isle Champion"
    NameQuest = "TikiQuest2"
    QuestLv = 2
    NameMon = "Isle Champion"
    CFrameQ = CFrame.new(-16542.447265625, 55.68632888793945, 1044.41650390625)
    CFrameMon = CFrame.new(-16848.94140625, 21.68633460998535, 1041.4490966796875)
    end
    end
    end
--// Check Material

function MaterialMon()
    if SelectMaterial == "Radioactive Material" then
    MMon = "Factory Staff"
    MPos = CFrame.new(295,73,-56)
    SP = "Default"
    elseif SelectMaterial == "Mystic Droplet" then
    MMon = "Water Fighter"
    MPos = CFrame.new(-3385,239,-10542)
    SP = "Default"
    elseif SelectMaterial == "Magma Ore" then
    if First_Sea then
    MMon = "Military Spy"
    MPos = CFrame.new(-5815,84,8820)
    SP = "Default"
    elseif Second_Sea then
    MMon = "Magma Ninja"
    MPos = CFrame.new(-5428,78,-5959)
    SP = "Default"
    end
    elseif SelectMaterial == "Angel Wings" then
    MMon = "God's Guard"
    MPos = CFrame.new(-4698,845,-1912)
    SP = "Default"
    if (game.Players.LocalPlayer.Character.HumanoidRootPart.Position - Vector3.new(-7859.09814, 5544.19043, -381.476196)).Magnitude >= 5000 then
    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("requestEntrance",Vector3.new(-7859.09814, 5544.19043, -381.476196))
    end
    elseif SelectMaterial == "Leather" then
    if First_Sea then
    MMon = "Brute"
    MPos = CFrame.new(-1145,15,4350)
    SP = "Default"
    elseif Second_Sea then
    MMon = "Marine Captain"
    MPos = CFrame.new(-2010.5059814453125, 73.00115966796875, -3326.620849609375)
    SP = "Default"
    elseif Third_Sea then
    MMon = "Jungle Pirate"
    MPos = CFrame.new(-11975.78515625, 331.7734069824219, -10620.0302734375)
    SP = "Default"
    end
    elseif SelectMaterial == "Scrap Metal" then
    if First_Sea then
    MMon = "Brute"
    MPos = CFrame.new(-1145,15,4350)
    SP = "Default"
    elseif Second_Sea then
    MMon = "Swan Pirate"
    MPos = CFrame.new(878,122,1235)
    SP = "Default"
    elseif Third_Sea then
    MMon = "Jungle Pirate"
    MPos = CFrame.new(-12107,332,-10549)
    SP = "Default"
    end
    elseif SelectMaterial == "Fish Tail" then
    if Third_Sea then
    MMon = "Fishman Raider"
    MPos = CFrame.new(-10993,332,-8940)
    SP = "Default"
    elseif First_Sea then
    MMon = "Fishman Warrior"
    MPos = CFrame.new(61123,19,1569)
    SP = "Default"
    if (game.Players.LocalPlayer.Character.HumanoidRootPart.Position - Vector3.new(61163.8515625, 5.342342376708984, 1819.7841796875)).Magnitude >= 17000 then
    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("requestEntrance",Vector3.new(61163.8515625, 5.342342376708984, 1819.7841796875))
    end
    end
    elseif SelectMaterial == "Demonic Wisp" then
    MMon = "Demonic Soul"
    MPos = CFrame.new(-9507,172,6158)
    SP = "Default"
    elseif SelectMaterial == "Vampire Fang" then
    MMon = "Vampire"
    MPos = CFrame.new(-6033,7,-1317)
    SP = "Default"
    elseif SelectMaterial == "Conjured Cocoa" then
    MMon = "Chocolate Bar Battler"
    MPos = CFrame.new(620.6344604492188,78.93644714355469, -12581.369140625)
    SP = "Default"
    elseif SelectMaterial == "Dragon Scale" then
    MMon = "Dragon Crew Archer"
    MPos = CFrame.new(6594,383,139)
    SP = "Default"
    elseif SelectMaterial == "Gunpowder" then
    MMon = "Pistol Billionaire"
    MPos = CFrame.new(-469,74,5904)
    SP = "Default"
    elseif SelectMaterial == "Mini Tusk" then
    MMon = "Mythological Pirate"
    MPos = CFrame.new(-13545,470,-6917)
    SP = "Default"
    end
    end

    --// Tween Island
	function TP2(P1)
    local Distance = (P1.Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude
    if Distance >= 1 then
    Speed = TweenSpeed
    end
    game:GetService("TweenService"):Create(game.Players.LocalPlayer.Character.HumanoidRootPart,TweenInfo.new(Distance/Speed, Enum.EasingStyle.Linear), {
      CFrame = P1
    }):Play()
    if _G.StopTween2 then
    game:GetService("TweenService"):Create(game.Players.LocalPlayer.Character.HumanoidRootPart,TweenInfo.new(Distance/Speed, Enum.EasingStyle.Linear), {
      CFrame = P1
    }):Cancel()
    end
    _G.Clip2 = true
    wait(Distance/Speed)
    _G.Clip2 = false
    end
    
    --// Tween Farm
    function Tween(P1)
    local Distance = (P1.Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude
    if Distance >= 1 then
    Speed = TweenSpeed
    end
    game:GetService("TweenService"):Create(game.Players.LocalPlayer.Character.HumanoidRootPart,TweenInfo.new(Distance/Speed, Enum.EasingStyle.Linear), {
      CFrame = P1
    }):Play()
    if _G.StopTween then
    game:GetService("TweenService"):Create(game.Players.LocalPlayer.Character.HumanoidRootPart,TweenInfo.new(Distance/Speed, Enum.EasingStyle.Linear), {
      CFrame = P1
    }):Cancel()
    end
    end
    
    --// Stop Tween Farm
    function CancelTween(target)
    if not target then
    _G.StopTween = true
    wait()
    Tween(game:GetService("Players").LocalPlayer.Character.HumanoidRootPart.CFrame)
    wait()
    _G.StopTween = false
    end
    end


--// Select Weapon
function EquipTool(Tool)
pcall(function()
  game.Players.LocalPlayer.Character.Humanoid:EquipTool(game.Players.LocalPlayer.Backpack[Tool])
  end)
end

--// Aimbot Skill Mastery
spawn(function()
  local gg = getrawmetatable(game)
  local old = gg.__namecall
  setreadonly(gg,false)
  gg.__namecall = newcclosure(function(...)
    local method = getnamecallmethod()
    local args = {
      ...
    }
    if tostring(method) == "FireServer" then
    if tostring(args[1]) == "RemoteEvent" then
    if tostring(args[2]) ~= "true" and tostring(args[2]) ~= "false" then
    if _G.UseSkill then
    if type(args[2]) == "vector" then
    args[2] = PositionSkillMasteryDevilFruit
    else
      args[2] = CFrame.new(PositionSkillMasteryDevilFruit)
    end
    return old(unpack(args))
    end
    end
    end
    end
--return args
    return old(...)
    end)
  end)

--// Aimbot Skill Player
local gg = getrawmetatable(game)
local old = gg.__namecall
setreadonly(gg,false)
gg.__namecall = newcclosure(function(...)
  local method = getnamecallmethod()
  local args = {
    ...
  }
  if tostring(method) == "FireServer" then
  if tostring(args[1]) == "RemoteEvent" then
  if tostring(args[2]) ~= "true" and tostring(args[2]) ~= "false" then
  if AimbotSkill then
  args[2] = _G.AimBotSkillPosition
  return old(unpack(args))
  end
  end
  end
  end
  return old(...)
  end)

--// Equip Gun Mastery
spawn(function()
  pcall(function()
    while task.wait() do
    for i,v in pairs(game:GetService("Players").LocalPlayer.Backpack:GetChildren()) do
    if v:IsA("Tool") then
    if v:FindFirstChild("RemoteFunctionShoot") then
    CurrentEquipGun = v.Name
    end
    end
    end
    end
    end)
  end)

--// Infinite Energy
function InfinityEnergy()
game:GetService('Players').LocalPlayer.Character.Energy.Changed:connect(function()
  if InfiniteAbility then
  game:GetService('Players').LocalPlayer.Character.Energy.Value = game:GetService('Players').LocalPlayer.Character.Energy.MaxValue
  end
  end)
end

--// Dodge No CD
function NoCooldown()
if DodgewithoutCool then
for i,v in next, getgc() do
if typeof(v) == "function" then
if getfenv(v).script == game.Players.LocalPlayer.Character:WaitForChild("Dodge") then
for i2,v2 in next, getupvalues(v) do
if tostring(v2) == "0.4" then
repeat wait(.1)
setupvalue(v,i2,0)
until not DodgewithoutCool
end
end
end
end
end
end
end

--// Farming Float Island Tween
spawn(function()
  game:GetService("RunService").Heartbeat:Connect(function()
    if AutoFarmHeart or getgenv().AutoTerrorshark or getgenv().farmpiranya or getgenv().AutoShark or getgenv().AutoFishCrew or AutoFarmNearestMob or getgenv().TweenToKitsune or getgenv().CollectAzure or _G.BossRaid or _G.GrabChest or AutoCitizen or AutoEcto or AutoEvoRace or AutoBartilo or AutoFactory or BringChestz or BringFruitz or AutoFarmQuest or _G.Clip2 or AutoFarmNoQuest or getgenv().AutoFarmBone or AutoFarmSelectMonsterQuest or AutoFarmSelectMonsterNoQuest or AutoFarmBossNoQuest or AutoFarmBossQuest or AutoFarmMasGun or AutoFarmMasDevilFruit or AutoFarmSelectArea or AutoSecondSea or AutoThirdSea or AutoDeathStep or AutoSuperhuman or AutoSharkman or AutoElectricClaw or AutoDragonTalon or AutoGodhuman or AutoRengoku or AutoBuddySword or AutoPole or AutoHallowSycthe or AutoCavander or AutoTushita or AutoDarkDagger or AutoCakePrince or AutoEliteHunter or AutoRainbowHaki or AutoSaber or AutoFarmKen or AutoKenHop or AutoKenV2 or KillPlayerMelee or KillPlayerGun or KillPlayerFruit or AutoDungeon or AutoNextIsland or AutoAdvanceDungeon or Musketeer or RipIndra or Auto_Serpent_Bow or AutoTorch or AutoSoulGuitar or Auto_Cursed_Dual_Katana or AutoFarmMaterial or Auto_Quest_Yama_1 or Auto_Quest_Yama_2 or Auto_Quest_Yama_3 or Auto_Quest_Tushita_1 or Auto_Quest_Tushita_2 or Auto_Quest_Tushita_3 or _G.Factory or _G.SwanGlasses or AutoBartilo or AutoEvoRace or AutoEcto then
    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Humanoid") then
    setfflag("HumanoidParallelRemoveNoPhysics","false")
    setfflag("HumanoidParallelRemoveNoPhysicsNoSimulate2","false")
    game:GetService("Players").LocalPlayer.Character.Humanoid:ChangeState(11)
    end
    else
      game:GetService("Players").LocalPlayer.Character.Humanoid:ChangeState(18)
    end
    end)
  end)

--// Player Body Velocity
spawn(function()
  pcall(function()
    while wait() do
    if AutoFarmHeart or getgenv().AutoTerrorshark or getgenv().farmpiranya or getgenv().AutoShark or getgenv().AutoFishCrew or getgenv().TweenToKitsune or getgenv().CollectAzure or AutoFarmNearestMob or _G.BossRaid or _G.GrabChest or AutoCitizen or AutoEcto or AutoEvoRace or AutoBartilo or AutoFactory or BringChestz or BringFruitz or AutoFarmQuest or _G.Clip2 or AutoFarmNoQuest or getgenv().AutoFarmBone or AutoFarmSelectMonsterQuest or AutoFarmSelectMonsterNoQuest or AutoFarmBossNoQuest or AutoFarmBossQuest or AutoFarmMasGun or AutoFarmMasDevilFruit or AutoFarmSelectArea or AutoSecondSea or AutoThirdSea or AutoDeathStep or AutoSuperhuman or AutoSharkman or AutoElectricClaw or AutoDragonTalon or AutoGodhuman or AutoRengoku or AutoBuddySword or AutoPole or AutoHallowSycthe or AutoCavander or AutoTushita or AutoDarkDagger or AutoCakePrince or AutoEliteHunter or AutoRainbowHaki or AutoSaber or AutoFarmKen or AutoKenHop or AutoKenV2 or KillPlayerMelee or KillPlayerGun or KillPlayerFruit or AutoDungeon or AutoNextIsland or AutoAdvanceDungeon or Musketeer or RipIndra or Auto_Serpent_Bow or AutoTorch or AutoSoulGuitar or Auto_Cursed_Dual_Katana or AutoFarmMaterial or Auto_Quest_Yama_1 or Auto_Quest_Yama_2 or Auto_Quest_Yama_3 or Auto_Quest_Tushita_1 or Auto_Quest_Tushita_2 or Auto_Quest_Tushita_3 or _G.Factory or _G.SwanGlasses or AutoBartilo or AutoEvoRace or AutoEcto then
    if not game:GetService("Players").LocalPlayer.Character.HumanoidRootPart:FindFirstChild("BodyClip") then
    local Noclip = Instance.new("BodyVelocity")
    Noclip.Name = "BodyClip"
    Noclip.Parent = game:GetService("Players").LocalPlayer.Character.HumanoidRootPart
    Noclip.MaxForce = Vector3.new(100000,100000,100000)
    Noclip.Velocity = Vector3.new(0,0,0)
    end
    else
      if game:GetService("Players").LocalPlayer.Character.HumanoidRootPart:FindFirstChild("BodyClip") then
    game:GetService("Players").LocalPlayer.Character.HumanoidRootPart:FindFirstChild("BodyClip"):Destroy()
    end
    end
    end
    end)
  end)

--// Farming Clip Tween
spawn(function()
  pcall(function()
    game:GetService("RunService").Stepped:Connect(function()
      if AutoFarmHeart or getgenv().AutoTerrorshark or getgenv().farmpiranya or getgenv().AutoShark or getgenv().AutoFishCrew or AutoFarmNearestMob or getgenv().TweenToKitsune or getgenv().CollectAzure or _G.BossRaid or _G.GrabChest or AutoCitizen or AutoEcto or AutoEvoRace or AutoBartilo or AutoFactory or BringChestz or BringFruitz or AutoFarmQuest or _G.Clip2 or AutoFarmNoQuest or getgenv().AutoFarmBone or AutoFarmSelectMonsterQuest or AutoFarmSelectMonsterNoQuest or AutoFarmBossNoQuest or AutoFarmBossQuest or AutoFarmMasGun or AutoFarmMasDevilFruit or AutoFarmSelectArea or AutoSecondSea or AutoThirdSea or AutoDeathStep or AutoSuperhuman or AutoSharkman or AutoElectricClaw or AutoDragonTalon or AutoGodhuman or AutoRengoku or AutoBuddySword or AutoPole or AutoHallowSycthe or AutoCavander or AutoTushita or AutoDarkDagger or AutoCakePrince or AutoEliteHunter or AutoRainbowHaki or AutoSaber or AutoFarmKen or AutoKenHop or AutoKenV2 or KillPlayerMelee or KillPlayerGun or KillPlayerFruit or AutoDungeon or AutoNextIsland or AutoAdvanceDungeon or Musketeer or RipIndra or Auto_Serpent_Bow or AutoTorch or AutoSoulGuitar or Auto_Cursed_Dual_Katana or AutoFarmMaterial or Auto_Quest_Yama_1 or Auto_Quest_Yama_2 or Auto_Quest_Yama_3 or Auto_Quest_Tushita_1 or Auto_Quest_Tushita_2 or Auto_Quest_Tushita_3 or _G.Factory or _G.SwanGlasses or AutoBartilo or AutoEvoRace or AutoEcto then
      for i,v in pairs(game:GetService("Players").LocalPlayer.Character:GetDescendants()) do
      if v:IsA("BasePart") then
      v.CanCollide = false
      end
      end
      end
      end)
    end)
  end)

--// Delete Effect Audio, Death, Respawn
spawn(function()
  while task.wait() do
  for i,v in pairs(game:GetService("Workspace")["_WorldOrigin"]:GetChildren()) do
  pcall(function()
    if v.Name == ("CurvedRing") or v.Name == ("SlashHit") or v.Name == ("SwordSlash") or v.Name == ("SlashTail") then
    v:Destroy()
    end
    end)
  end
  for i,v in pairs(game:GetService("ReplicatedStorage").Effect.Container.Death:GetChildren()) do
  pcall(function()
    v:Destroy()
    end)
  end
  for i,v in pairs(game:GetService("ReplicatedStorage").Effect.Container.Respawn:GetChildren()) do
  pcall(function()
    v:Destroy()
    end)
  end
  end
  end)

--// Material Check Function
function CheckMaterial(matname)
for i,v in pairs(game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("getInventory")) do
if type(v) == "table" then
if v.Type == "Material" then
if v.Name == matname then
return v.Count
end
end
end
end
return 0
end
--// Get Weapon Sword
function GetWeaponInventory(Weaponname)
for i,v in pairs(game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("getInventory")) do
if type(v) == "table" then
if v.Type == "Sword" then
if v.Name == Weaponname then
return true
end
end
end
end
return false
end

--// main farming



spawn(function()
  while wait(.8) do
  if _G.GrabChested then
  pcall(function()
    local player = game.Players.LocalPlayer.Character
    for i,v in pairs(game.Workspace:GetChildren()) do
    if string.find(v.Name, 'Chest') then
    player.HumanoidRootPart.CFrame = v.CFrame
    wait(.15)
    end
    end
    player.Head:Destroy()
    for i,v in pairs(game.Workspace:GetDescendants()) do
    if string.find(v.Name, 'Chest') and v:IsA("TouchTransmitter") then
    firetouchinterest(player.HumanoidRootPart, v.Parent, 0) -- 0 is touch
    wait()
    firetouchinterest(player.HumanoidRootPart, v.Parent, 1) -- 1 is not touch
    end
    end
    if not game.Workspace:FindFirstChild("Chest1") or not game.Workspace:FindFirstChild("Chest2") or not game.Workspace:FindFirstChild("Chest3") then
    wait(10)
    Hop()
    end
    end)
  end
  end
  end)



  Main:Toggle("Cày Cấp",AutoFarmQuest,function(value)
    AutoFarmQuest = value
end)

  spawn(function()
    while task.wait() do
    if AutoFarmQuest then
    pcall(function()
      CheckLevel()
      if not string.find(game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Container.QuestTitle.Title.Text, NameMon) or game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Visible == false then
      game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("AbandonQuest")
        Tween(CFrameQ)
      if (CFrameQ.Position - game:GetService("Players").LocalPlayer.Character.HumanoidRootPart.Position).Magnitude <= 5 then
      game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StartQuest",NameQuest,QuestLv)
      end
      elseif string.find(game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Container.QuestTitle.Title.Text, NameMon) or game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Visible == true then
      for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
      if v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") and v.Humanoid.Health > 0 then
      if v.Name == Ms then
      repeat game:GetService("RunService").Heartbeat:wait()
      EquipTool(SelectWeapon)
      click()
      Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
      v.HumanoidRootPart.Size = Vector3.new(60, 60, 60)
      v.HumanoidRootPart.Transparency = 1
      v.Humanoid.JumpPower = 0
      v.Humanoid.WalkSpeed = 0
      v.HumanoidRootPart.CanCollide = false
      FarmPos = v.HumanoidRootPart.CFrame
      MonFarm = v.Name
      until not AutoFarmQuest or not v.Parent or v.Humanoid.Health <= 0 or not game:GetService("Workspace").Enemies:FindFirstChild(v.Name) or game.Players.LocalPlayer.PlayerGui.Main.Quest.Visible == false
      end
      end
      end
      for i,v in pairs(game:GetService("Workspace")["_WorldOrigin"].EnemySpawns:GetChildren()) do
      if string.find(v.Name,NameMon) then
      if (game.Players.LocalPlayer.Character.HumanoidRootPart.Position - v.Position).Magnitude >= 10 then
        Tween(v.CFrame * CFrame.new(posX,posY,posZ))
      end
      end
      end
      end
      end)
    end
    end
    end)
    Main:Toggle('Đánh quái xung quanh',AutoFarmNearestMob,function(nearfarmf)
        AutoFarmNearestMob = nearfarmf
        CancelTween(AutoFarmNearestMob)
        end)
      spawn(function()
        while wait(.1) do
        if AutoFarmNearestMob then
        pcall(function()
          for i,v in pairs (game.Workspace.Enemies:GetChildren()) do
          if v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") and v.Humanoid.Health > 0 then
          if v.Name then
          if (game.Players.LocalPlayer.Character.HumanoidRootPart.Position - v:FindFirstChild("HumanoidRootPart").Position).Magnitude <= 1000 then
          repeat task.wait()
          EquipTool(SelectWeapon)
          click()
          Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX, posY, posZ))
          v.HumanoidRootPart.Size = Vector3.new(60,60,60)
          v.HumanoidRootPart.Transparency = 1
          v.Humanoid.JumpPower = 0
          v.Humanoid.WalkSpeed = 0
          v.HumanoidRootPart.CanCollide = false
          FarmPos = v.HumanoidRootPart.CFrame
          MonFarm = v.Name
         --Click()
          until not AutoFarmNearestMob or not v.Parent or v.Humanoid.Health <= 0 or not game.Workspace.Enemies:FindFirstChild(v.Name)
          end
          end
          end
          end
          end)
        end
        end
      end)
getgenv().ModeBone = 'Mặc Định'
Main:Dropdown("Chọn Chế Độ Xương",{'Mặc Định','Nhận Nhiệm Vụ'},function(v)
  getgenv().ModeBone = v
end) 
Main:Toggle("Cày Xương",getgenv().AutoFarmBone,function(bonefarn)
            getgenv().AutoFarmBone = bonefarn
            CancelTween(getgenv().AutoFarmBone)
            end)
            spawn(function()
                while wait() do 
                    if getgenv().ModeBone == "Mặc Định" and getgenv().AutoFarmBone then
                        pcall(function()
                            if game:GetService("Workspace").Enemies:FindFirstChild("Reborn Skeleton") or game:GetService("Workspace").Enemies:FindFirstChild("Living Zombie") or game:GetService("Workspace").Enemies:FindFirstChild("Demonic Soul") or game:GetService("Workspace").Enemies:FindFirstChild("Posessed Mummy") then
                                for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
                                    if v.Name == "Reborn Skeleton" or v.Name == "Living Zombie" or v.Name == "Demonic Soul" or v.Name == "Posessed Mummy" then
                                       if v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") and v.Humanoid.Health > 0 then
                                           repeat task.wait()
                                                EquipTool(SelectWeapon)
                                                v.HumanoidRootPart.CanCollide = false
                                                v.Humanoid.WalkSpeed = 0
                                                v.Head.CanCollide = false 
                                                FarmPos = v.HumanoidRootPart.CFrame
                                                MonFarm = v.Name
                                                Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
                                                click()
                                            until not getgenv().AutoFarmBone or not v.Parent or v.Humanoid.Health <= 0
                                        end
                                    end
                                end
                            else
                            Tween(BonePos)
                                Tween(CFrame.new(-9506.234375, 172.130615234375, 6117.0771484375))
                                for i,v in pairs(game:GetService("ReplicatedStorage"):GetChildren()) do 
                                    if v.Name == "Reborn Skeleton" then
                                        Tween(v.HumanoidRootPart.CFrame * CFrame.new(2,20,2))
                                    elseif v.Name == "Living Zombie" then
                                        Tween(v.HumanoidRootPart.CFrame * CFrame.new(2,20,2))
                                    elseif v.Name == "Demonic Soul" then
                                        Tween(v.HumanoidRootPart.CFrame * CFrame.new(2,20,2))
                                    elseif v.Name == "Posessed Mummy" then
                                        Tween(v.HumanoidRootPart.CFrame * CFrame.new(2,20,2))
                                    end
                                end
                            end
                        end)
                    end
                end
            end)    
            local BoneQuestPos = CFrame.new(-9516.99316, 172.017181, 6078.46533, 0, 0, -1, 0, 1, 0, 1, 0, 0)
            spawn(function()
                while wait() do
                    if getgenv().ModeBone == "Nhận Nhiệm Vụ" and getgenv().AutoFarmBone then
                        pcall(function()
                            local QuestTitle = game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Container.QuestTitle.Title.Text
                            if not string.find(QuestTitle, "Demonic Soul") then
                                game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("AbandonQuest")
                            end
                            if game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Visible == false then
                                Tween(BoneQuestPos)
                                wait(1)
                            if (BoneQuestPos.Position - game:GetService("Players").LocalPlayer.Character.HumanoidRootPart.Position).Magnitude <= 3 then    
                                game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StartQuest","HauntedQuest2",1)
                                end
                            elseif game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Visible == true then
                                if game:GetService("Workspace").Enemies:FindFirstChild("Reborn Skeleton") or game:GetService("Workspace").Enemies:FindFirstChild("Living Zombie") or game:GetService("Workspace").Enemies:FindFirstChild("Demonic Soul") or game:GetService("Workspace").Enemies:FindFirstChild("Posessed Mummy") then
                                    for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
                                        if v:FindFirstChild("HumanoidRootPart") and v:FindFirstChild("Humanoid") and v.Humanoid.Health > 0 then
                                            if v.Name == "Reborn Skeleton" or v.Name == "Living Zombie" or v.Name == "Demonic Soul" or v.Name == "Posessed Mummy" then
                                                if string.find(game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Container.QuestTitle.Title.Text, "Demonic Soul") then
                                                    repeat task.wait()
                                                        EquipTool(SelectWeapon)                                     
                                                       FarmPos = v.HumanoidRootPart.CFrame
                                                       MonFarm = v.Name
                                                       Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
                                                        v.HumanoidRootPart.CanCollide = false
                                                        v.Humanoid.WalkSpeed = 0
                                                        v.Head.CanCollide = false
                                                        v.HumanoidRootPart.Size = Vector3.new(70,70,70)
                                                        click()
                                                    until not getgenv().AutoFarmBone or v.Humanoid.Health <= 0 or not v.Parent or game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Visible == false
                                                else
                                                    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("AbandonQuest")
                                                end
                                            end
                                        end
                                    end
                                else
                                    if game:GetService("ReplicatedStorage"):FindFirstChild("Demonic Soul") then
                                     Tween(game:GetService("ReplicatedStorage"):FindFirstChild("Demonic Soul").HumanoidRootPart.CFrame * CFrame.new(15,10,2))
                                    end
                                end
                            end
                        end)
                    end
                end
            end)


          Main:Toggle("Đổi xương",_G.Auto_Trade_Bone,function(value)
           _G.Auto_Trade_Bone = value
           end)
          
          spawn(function()
           while wait(0.01) do
           if _G.Auto_Trade_Bone then
           local args = {
            [1] = "Bones",
            [2] = "Buy",
            [3] = 1,
            [4] = 1
           }
          
           game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer(unpack(args))
           end
           end
           end)







           Main:Toggle('Cày tư lệnh bột', AutoCakePrince, function(autocakefunc)
            AutoCakePrince = autocakefunc
            CancelTween(AutoCakePrince)
            end)
          spawn(function()
            while task.wait() do
            if AutoCakePrince then
            game.ReplicatedStorage.Remotes.CommF_:InvokeServer("CakePrinceSpawner")
            if game.ReplicatedStorage:FindFirstChild("Cake Prince") or game:GetService("Workspace").Enemies:FindFirstChild("Cake Prince") then
            if game:GetService("Workspace").Enemies:FindFirstChild("Cake Prince") then
            for i,v in pairs(game.Workspace.Enemies:GetChildren()) do
            if AutoCakePrince and v.Name == "Cake Prince" and v:FindFirstChild("HumanoidRootPart") and v:FindFirstChild("Humanoid") and v.Humanoid.Health > 0 then
            repeat task.wait()
            EquipTool(SelectWeapon)
            click()
            Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
            v.HumanoidRootPart.Size = Vector3.new(60, 60, 60)
            v.HumanoidRootPart.Transparency = 1
            v.Humanoid.JumpPower = 0
            v.Humanoid.WalkSpeed = 0
            v.HumanoidRootPart.CanCollide = false
            until not AutoCakePrince or not v.Parent or v.Humanoid.Health <= 0
            end
            end
            else
              if game:GetService("Workspace").Map.CakeLoaf.BigMirror.Other.Transparency == 0 and (CFrame.new(-1990.672607421875, 4532.99951171875, -14973.6748046875).Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude >= 2000 then
            Tween(CFrame.new(-2151.82153, 149.315704, -12404.9053))
            end
            end
            else
              if game:GetService("Workspace").Enemies:FindFirstChild("Cookie Crafter") or game:GetService("Workspace").Enemies:FindFirstChild("Cake Guard") or game:GetService("Workspace").Enemies:FindFirstChild("Baking Staff") or game:GetService("Workspace").Enemies:FindFirstChild("Head Baker") then
            for i,v in pairs(game.Workspace.Enemies:GetChildren()) do
            if v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") and v.Humanoid.Health > 0 then
            if (v.Name == "Cookie Crafter" or v.Name == "Cake Guard" or v.Name == "Baking Staff" or v.Name == "Head Baker") and v:FindFirstChild("HumanoidRootPart") and v:FindFirstChild("Humanoid") and v.Humanoid.Health > 0 then
            repeat task.wait()
            EquipTool(SelectWeapon)
            click()
            Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
            v.HumanoidRootPart.Size = Vector3.new(60, 60, 60)
            v.HumanoidRootPart.Transparency = 1
            v.Humanoid.JumpPower = 0
            v.Humanoid.WalkSpeed = 0
            v.HumanoidRootPart.CanCollide = false
            FarmPos = v.HumanoidRootPart.CFrame
            MonFarm = v.Name
            until not AutoCakePrince or not v.Parent or v.Humanoid.Health <= 0
            end
            end
            end
            else
            local cakepos = CFrame.new(-2077, 252, -12373)
            Tween(cakepos)
            end
            end
            end
            end
            end)


Main:Label("Mastery")

local MasteryType = {
    'Level','Mob Aura'
  }
  Main:Dropdown('Chế độ', MasteryType, function(typefunc)
    TypeMastery = typefunc
    end)
  
    Main:Toggle("Cày thông thạo trái", AutoFarmMasDevilFruit, function(dfm)
    AutoFarmMasDevilFruit = dfm
	end)




	Main:Toggle("Cày thông thạo súng",AutoFarmMasGun, function(gmf)
		AutoFarmMasGun = gmf
		CancelTween(AutoFarmMasGun)
		end)

		spawn(function()
			while task.wait(.1) do
			if AutoFarmMasGun and TypeMastery == 'Level' then
			pcall(function()
			  CheckLevel(SelectMonster)
			  if not string.find(game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Container.QuestTitle.Title.Text, NameMon) or game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Visible == false then
			  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("AbandonQuest")
			 
				Tween(CFrameQ)
			 
			  if (CFrameQ.Position - game:GetService("Players").LocalPlayer.Character.HumanoidRootPart.Position).Magnitude <= 5 then
			  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StartQuest",NameQuest,QuestLv)
			  end
			  elseif string.find(game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Container.QuestTitle.Title.Text, NameMon) or game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Visible == true then
			  for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
			  if v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") then
			  if v.Name == Ms then
			  repeat game:GetService("RunService").Heartbeat:wait()
			  if v.Humanoid.Health <= v.Humanoid.MaxHealth * KillPercent / 100 then
			  EquipTool(CurrentEquipGun)
			  game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ)
			  game:GetService("Players").LocalPlayer.Character[CurrentEquipGun].Cooldown.Value = 0
			  UseSkillGun = true
			  else
				UseSkillGun = false
			  EquipTool(SelectWeapon)
              click()
			  Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
			  v.HumanoidRootPart.Size = Vector3.new(60,60,60)
			  v.HumanoidRootPart.Transparency = 1
			  v.Humanoid.JumpPower = 0
			  v.Humanoid.WalkSpeed = 0
			  v.HumanoidRootPart.CanCollide = false
			  FarmPos = v.HumanoidRootPart.CFrame
			  MonFarm = v.Name
			 --Click()
			  end
			  until not AutoFarmMasGun or not v.Parent or v.Humanoid.Health <= 0 or game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Visible == false or not game:GetService("Workspace").Enemies:FindFirstChild(v.Name) or not TypeMastery == 'Queat'
			  UseSkillGun = false
			  end
			  end
			  end
			  UseSkillGun = false
			  Tween(CFrameMon)
			  end
			  end)
			elseif AutoFarmMasGun and TypeMastery == 'No Quest' then
			pcall(function()
			  if BypassTP then
			  if (game.Players.LocalPlayer.Character.HumanoidRootPart.Position - CFrameMon.Position).Magnitude > 2000 then
			  BTP(CFrameMon)
			  wait(3)
			  elseif (game.Players.LocalPlayer.Character.HumanoidRootPart.Position - CFrameMon.Position).Magnitude < 2000 then
			  Tween(CFrameMon)
			  end
			  else
				Tween(CFrameMon)
			  end
			  CheckLevel()
			  if game.Workspace.Enemies:FindFirstChild(Ms) then
			  for i,v in pairs (game.Workspace.Enemies:GetChildren()) do
			  if v.Name == Ms and v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") then
			  repeat game:GetService("RunService").Heartbeat:wait()
			  if v.Humanoid.Health <= v.Humanoid.MaxHealth * KillPercent / 100 then
			  EquipTool(CurrentEquipGun)
			  game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ)
			  game:GetService("Players").LocalPlayer.Character[CurrentEquipGun].Cooldown.Value = 0
			  UseSkillGun = true
			  else
				UseSkillGun = false
			  EquipTool(SelectWeapon)
              click()
			  Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
			  v.HumanoidRootPart.Size = Vector3.new(60,60,60)
			  v.HumanoidRootPart.Transparency = 1
			  v.Humanoid.JumpPower = 0
			  v.Humanoid.WalkSpeed = 0
			  v.HumanoidRootPart.CanCollide = false
			--v.Humanoid:ChangeState(11)
			--v.Humanoid:ChangeState(14)
			  FarmPos = v.HumanoidRootPart.CFrame
			  MonFarm = v.Name
			 --Click()
			  end
			  until not AutoFarmMasGun or not v.Parent or v.Humanoid.Health <= 0 or not game:GetService("Workspace").Enemies:FindFirstChild(v.Name) or not TypeMastery == 'No Quest'
			  end
			  end
			  else
				UseSkillGun = false
			  Tween(CFrameMon)
			  end
			  end)
			elseif AutoFarmMasGun and TypeMastery == 'Mob Aura' then
			pcall(function()
			  for i,v in pairs (game.Workspace.Enemies:GetChildren()) do
			  if v.Name and v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") then
			  if (game.Players.LocalPlayer.Character.HumanoidRootPart.Position - v:FindFirstChild("HumanoidRootPart").Position).Magnitude <= 2000 then
			  repeat game:GetService("RunService").Heartbeat:wait()
			  if v.Humanoid.Health <= v.Humanoid.MaxHealth * KillPercent / 100 then
			  EquipTool(CurrentEquipGun)
			  game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ)
			  game:GetService("Players").LocalPlayer.Character[CurrentEquipGun].Cooldown.Value = 0
			  UseSkillGun = true
			  else
				UseSkillGun = false
			  EquipTool(SelectWeapon)
              click()
			  Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
			  v.HumanoidRootPart.Size = Vector3.new(60,60,60)
			  v.HumanoidRootPart.Transparency = 1
			  v.Humanoid.JumpPower = 0
			  v.Humanoid.WalkSpeed = 0
			  v.HumanoidRootPart.CanCollide = false
			  FarmPos = v.HumanoidRootPart.CFrame
			  MonFarm = v.Name
			 --Click()
			  end
			  until not AutoFarmMasGun or not MasteryType == 'Nearest' or not v.Parent or v.Humanoid.Health <= 0 or not TypeMastery == 'Nearest'
			  UseSkillGun = false
			  end
			  end
			  end
			  end)
			elseif AutoFarmMasGun and TypeMastery == 'Boss' then
			if game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Visible == false then
			CheckBossQuest()
			if BypassTP then
			if (game.Players.LocalPlayer.Character.HumanoidRootPart.Position - CFrameQBoss.Position).Magnitude > 2000 then
			BTP(CFrameQBoss)
			wait(3)
			elseif (game.Players.LocalPlayer.Character.HumanoidRootPart.Position - CFrameQBoss.Position).Magnitude < 2000 then
			Tween(CFrameQBoss)
			end
			else
			  Tween(CFrameQBoss)
			end
		  
			if (CFrameQBoss.Position - game:GetService("Players").LocalPlayer.Character.HumanoidRootPart.Position).Magnitude <= 5 then
			game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StartQuest",NameQuestBoss,QuestLvBoss)
			end
			elseif game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Visible == true then
			pcall(function()
			  CheckBossQuest()
			  if game:GetService("Workspace").Enemies:FindFirstChild(SelectBoss) then
			  for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
			  if v.Name == selectBoss and v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") then
			  repeat game:GetService("RunService").Heartbeat:wait()
			  if v.Humanoid.Health <= v.Humanoid.MaxHealth * KillPercent / 100 then
			  EquipTool(CurrentEquipGun)
			  Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
			  game:GetService("Players").LocalPlayer.Character[CurrentEquipGun].Cooldown.Value = 0
			  UseSkillGun = true
			  else
				UseSkillGun = false
			  EquipTool(SelectWeapon)
              click()
			  Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
			  v.HumanoidRootPart.Size = Vector3.new(60,60,60)
			  v.HumanoidRootPart.Transparency = 1
			  v.Humanoid.JumpPower = 0
			  v.Humanoid.WalkSpeed = 0
			  v.HumanoidRootPart.CanCollide = false
		  --v.Humanoid:ChangeState(11)
		  --v.Humanoid:ChangeState(14)
			  FarmPos = v.HumanoidRootPart.CFrame
			  MonFarm = v.Name
			 --Click()
			  end
			  until not AutoFarmMasGun or not TypeMastery == 'Boss' or not v.Parent or v.Humanoid.Health <= 0 or game.Players.LocalPlayer.PlayerGui.Main.Quest.Visible == false or not game:GetService("Workspace").Enemies:FindFirstChild(v.Name)
			  end
			  end
			  else
				UseSkillGun = false
			  Tween(game:GetService("ReplicatedStorage"):FindFirstChild(SelectBoss).HumanoidRootPart.CFrame*CFrame.new(posX,posY,posZ))
			  end
			  end)
			end
			end
			end
			end)
		  
		  spawn(function()
			game:GetService("RunService").RenderStepped:Connect(function()
			  if UseSkillGun then
			  pcall(function()
				for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
				if v.Name == MonFarm then
				game:GetService("Players").LocalPlayer.Character[CurrentEquipGun].RemoteFunctionShoot:InvokeServer(v.HumanoidRootPart.Position,v.HumanoidRootPart)
				Click()
				end
				end
				end)
			  end
			  end)
			end)

	
			spawn(function()
				while wait(1) do
					if UseSkillGun then
						pcall(function()
							CheckLevel()
							for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do                                                 
									if _G.SkillGunZ then
										local args = {
											[1] = PosMonMasteryGun.Position
										}
										game:GetService("Players").LocalPlayer.Character[game:GetService("Players").LocalPlayer.Character:FindFirstChildOfClass("Tool").Name].RemoteEvent:FireServer(unpack(args))                        
										game:GetService("VirtualInputManager"):SendKeyEvent(true,"Z",false,game)
										game:GetService("VirtualInputManager"):SendKeyEvent(false,"Z",false,game)
									end
									if _G.SkillGunX then          
										local args = {
											[1] = PosMonMasteryGun.Position
										}
										game:GetService("Players").LocalPlayer.Character[game:GetService("Players").LocalPlayer.Character:FindFirstChildOfClass("Tool").Name].RemoteEvent:FireServer(unpack(args))               
										game:GetService("VirtualInputManager"):SendKeyEvent(true,"X",false,game)
										game:GetService("VirtualInputManager"):SendKeyEvent(false,"X",false,game)
								end
							end
						end)
					end
				end
			end)
		
			spawn(function()
				game:GetService("RunService").RenderStepped:Connect(function()
					pcall(function()
						if UseSkillGun then
							for i,v in pairs(game:GetService("Players").LocalPlayer.PlayerGui.Notifications:GetChildren()) do
								if v.Name == "NotificationTemplate" then
									if string.find(v.Text,"Skill locked!") then
										v:Destroy()
									end
								end
							end
						end
					end)
				end)
			end)
			
			spawn(function()
				pcall(function()
					game:GetService("RunService").RenderStepped:Connect(function()
						if UseSkillGun then
							local args = {
								[1] = PosMonMasteryGun.Position
							}
							game:GetService("Players").LocalPlayer.Character[game:GetService("Players").LocalPlayer.Data.Gun.Value].RemoteEvent:FireServer(unpack(args))
						end
					end)
				end)
			end)
	

  
  spawn(function()
    while task.wait(.1) do
    if _G.UseSkill then
    pcall(function()
      if _G.UseSkill then
      for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
      if v.Name == MonFarm and v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") and v.Humanoid.Health <= v.Humanoid.MaxHealth * KillPercent / 100 then
      repeat game:GetService("RunService").Heartbeat:wait()
      EquipTool(game.Players.LocalPlayer.Data.DevilFruit.Value)
      Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
      PositionSkillMasteryDevilFruit = v.HumanoidRootPart.Position
      if game:GetService("Players").LocalPlayer.Character:FindFirstChild(game.Players.LocalPlayer.Data.DevilFruit.Value) then
      game:GetService("Players").LocalPlayer.Character:FindFirstChild(game.Players.LocalPlayer.Data.DevilFruit.Value).MousePos.Value = PositionSkillMasteryDevilFruit
      local DevilFruitMastery = game:GetService("Players").LocalPlayer.Character:FindFirstChild(game.Players.LocalPlayer.Data.DevilFruit.Value).Level.Value
      if SkillZ and DevilFruitMastery >= 1 then
      game:service('VirtualInputManager'):SendKeyEvent(true, "Z", false, game)
      wait(.1)
      game:service('VirtualInputManager'):SendKeyEvent(false, "Z", false, game)
      end
      if SkillX and DevilFruitMastery >= 1 then
      game:service('VirtualInputManager'):SendKeyEvent(true, "X", false, game)
      wait(.1)
      game:service('VirtualInputManager'):SendKeyEvent(false, "X", false, game)
      end
      if SkillC and DevilFruitMastery >= 1 then
      game:service('VirtualInputManager'):SendKeyEvent(true, "C", false, game)
      wait(.1)
      game:service('VirtualInputManager'):SendKeyEvent(false, "C", false, game)
      end
      if SkillV and DevilFruitMastery >= 1 then
      game:service('VirtualInputManager'):SendKeyEvent(true, "V", false, game)
      wait(.1)
      game:service('VirtualInputManager'):SendKeyEvent(false, "V", false, game)
      end
      if SkillF and DevilFruitMastery >= 1 then
      game:GetService("VirtualInputManager"):SendKeyEvent(true, "F", false, game)
      wait(.1)
      game:GetService("VirtualInputManager"):SendKeyEvent(false, "F", false, game)
      end
      end
      until not AutoFarmMasDevilFruit or not _G.UseSkill or v.Humanoid.Health == 0
      end
      end
      end
      end)
    end
    end
    end)
  
  spawn(function()
    while task.wait(.1) do
    if AutoFarmMasDevilFruit and TypeMastery == 'Level' then
    pcall(function()
      CheckLevel(SelectMonster)
      if not string.find(game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Container.QuestTitle.Title.Text, NameMon) or game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Visible == false then
      game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("AbandonQuest")
      if BypassTP then
      if (game.Players.LocalPlayer.Character.HumanoidRootPart.Position - CFrameQ.Position).Magnitude > 2000 then
      BTP(CFrameQ)
      wait(3)
      elseif (game.Players.LocalPlayer.Character.HumanoidRootPart.Position - CFrameQ.Position).Magnitude < 2000 then
      Tween(CFrameQ)
      end
      else
        Tween(CFrameQ)
      end
      if (CFrameQ.Position - game:GetService("Players").LocalPlayer.Character.HumanoidRootPart.Position).Magnitude <= 5 then
      game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StartQuest",NameQuest,QuestLv)
      end
      elseif string.find(game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Container.QuestTitle.Title.Text, NameMon) or game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Visible == true then
      for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
      if v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") then
      if v.Name == Ms then
      repeat game:GetService("RunService").Heartbeat:wait()
      if v.Humanoid.Health <= v.Humanoid.MaxHealth * KillPercent / 100 then
  
      _G.UseSkill = true
      else
        _G.UseSkill = false
      EquipTool(SelectWeapon)
      click()
      Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
      v.HumanoidRootPart.Size = Vector3.new(60,60,60)
      v.HumanoidRootPart.Transparency = 1
      v.Humanoid.JumpPower = 0
      v.Humanoid.WalkSpeed = 0
      v.HumanoidRootPart.CanCollide = false
  --v.Humanoid:ChangeState(11)
  --v.Humanoid:ChangeState(14)
      FarmPos = v.HumanoidRootPart.CFrame
      MonFarm = v.Name
     --Click()
      end
      until not AutoFarmMasDevilFruit or not v.Parent or v.Humanoid.Health == 0 or game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Visible == false or not game:GetService("Workspace").Enemies:FindFirstChild(v.Name) or not TypeMastery == 'Queat'
      _G.UseSkill = false
      end
      end
      end
      _G.UseSkill = false
      Tween(CFrameMon)
      end
      end)
    elseif AutoFarmMasDevilFruit and TypeMastery == 'No Quest' then
    pcall(function()
      CheckLevel()
      if BypassTP then
      if (game.Players.LocalPlayer.Character.HumanoidRootPart.Position - CFrameMon.Position).Magnitude > 2000 then
      BTP(CFrameMon)
      wait(3)
      elseif (game.Players.LocalPlayer.Character.HumanoidRootPart.Position - CFrameMon.Position).Magnitude < 2000 then
      Tween(CFrameMon)
      end
      else
        Tween(CFrameMon)
      end
      if game.Workspace.Enemies:FindFirstChild(Ms) then
      for i,v in pairs (game.Workspace.Enemies:GetChildren()) do
      if v.Name == Ms and v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") then
      repeat game:GetService("RunService").Heartbeat:wait()
      if v.Humanoid.Health <= v.Humanoid.MaxHealth * KillPercent / 100 then
      _G.UseSkill = true
      else
        _G.UseSkill = false
      EquipTool(SelectWeapon)
      click()
      Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
      v.HumanoidRootPart.Size = Vector3.new(60,60,60)
      v.HumanoidRootPart.Transparency = 1
      v.Humanoid.JumpPower = 0
      v.Humanoid.WalkSpeed = 0
      v.HumanoidRootPart.CanCollide = false
  --v.Humanoid:ChangeState(11)
  --v.Humanoid:ChangeState(14)
      FarmPos = v.HumanoidRootPart.CFrame
      MonFarm = v.Name
     --Click()
      end
  
      until not AutoFarmMasDevilFruit or not v.Parent or v.Humanoid.Health == 0 or not game:GetService("Workspace").Enemies:FindFirstChild(v.Name) or not TypeMastery == 'No Quest'
      _G.UseSkill = false
      end
      end
      else
        _G.UseSkill = false
      Tween(CFrameMon)
      end
      end)
    elseif AutoFarmMasDevilFruit and TypeMastery == 'Mob Aura' then
    pcall(function()
      for i,v in pairs (game.Workspace.Enemies:GetChildren()) do
      if v.Name and v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") then
      if (game.Players.LocalPlayer.Character.HumanoidRootPart.Position - v:FindFirstChild("HumanoidRootPart").Position).Magnitude <= 2000 then
      repeat game:GetService("RunService").Heartbeat:wait()
      if v.Humanoid.Health <= v.Humanoid.MaxHealth * KillPercent / 100 then
      _G.UseSkill = true
      else
        _G.UseSkill = false
      EquipTool(SelectWeapon)
      click()
      Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
      v.HumanoidRootPart.Size = Vector3.new(60,60,60)
      v.HumanoidRootPart.Transparency = 1
      v.Humanoid.JumpPower = 0
      v.Humanoid.WalkSpeed = 0
      v.HumanoidRootPart.CanCollide = false
  --v.Humanoid:ChangeState(11)
  --v.Humanoid:ChangeState(14)
      FarmPos = v.HumanoidRootPart.CFrame
      MonFarm = v.Name
     --Click()
      end
      until not AutoFarmMasDevilFruit or not MasteryType == 'Nearest' or not v.Parent or v.Humanoid.Health == 0 or not TypeMastery == 'Nearest'
      _G.UseSkill = false
      end
      end
      end
      end)
    elseif AutoFarmMasDevilFruit and TypeMastery == 'Boss' then
    if game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Visible == false then
    CheckBossQuest()
    if BypassTP then
    if (game.Players.LocalPlayer.Character.HumanoidRootPart.Position - CFrameQBoss.Position).Magnitude > 2000 then
    BTP(CFrameQBoss)
    wait(3)
    elseif (game.Players.LocalPlayer.Character.HumanoidRootPart.Position - CFrameQBoss.Position).Magnitude < 2000 then
    Tween(CFrameQBoss)
    end
    else
      Tween(CFrameQBoss)
    end
  
    if (CFrameQBoss.Position - game:GetService("Players").LocalPlayer.Character.HumanoidRootPart.Position).Magnitude <= 5 then
    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StartQuest",NameQuestBoss,QuestLvBoss)
    end
    elseif game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Visible == true then
    pcall(function()
      CheckBossQuest()
      if game:GetService("Workspace").Enemies:FindFirstChild(SelectBoss) then
      for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
      if v.Name == selectBoss and v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") then
      repeat game:GetService("RunService").Heartbeat:wait()
      if v.Humanoid.Health <= v.Humanoid.MaxHealth * KillPercent / 100 then
      _G.UseSkill = true
      else
        _G.UseSkill = false
      EquipTool(SelectWeapon)
      click()
      Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
      v.HumanoidRootPart.Size = Vector3.new(60,60,60)
      v.HumanoidRootPart.Transparency = 1
      v.Humanoid.JumpPower = 0
      v.Humanoid.WalkSpeed = 0
      v.HumanoidRootPart.CanCollide = false
  --v.Humanoid:ChangeState(11)
  --v.Humanoid:ChangeState(14)
      FarmPos = v.HumanoidRootPart.CFrame
      MonFarm = v.Name
     --Click()
      end
      until not AutoFarmMasDevilFruit or not TypeMastery == 'Boss' or not v.Parent or v.Humanoid.Health == 0 or game.Players.LocalPlayer.PlayerGui.Main.Quest.Visible == false or not game:GetService("Workspace").Enemies:FindFirstChild(v.Name)
      end
      end
      else
        _G.UseSkill = false
      Tween(game:GetService("ReplicatedStorage"):FindFirstChild(SelectBoss).HumanoidRootPart.CFrame*CFrame.new(posX,posY,posZ))
      end
      end)
    end
    end
    end
    end)


    KillPercent = 35
    Main:Slider('% máu quái',1,100,35, function(KillPercentfunc)
      KillPercent = KillPercentfunc
      end)
    
    SkillZ = true
    SkillX = true
    SkillC = true
    SkillV = false
    SkillF = false
    Main:Toggle('Z',SkillZ, function(zfunc)
      SkillZ = zfunc
      end)
    
      Main:Toggle('X', SkillX, function(xfunc)
      SkillX = xfunc
      end)
    
      Main:Toggle('C', SkillC, function(cfunc)
      SkillC = cfunc
      end)
    
      Main:Toggle('V', SkillV, function(vfunc)
      SkillV = vfunc
      end)
    
      Main:Toggle('F', SkillF, function(ffunc)
      SkillF = ffunc
    end)
    

Main:Label("Boss")

if First_Sea then
    tableBoss = {"The Gorilla King","Bobby","Yeti","Mob Leader","Vice Admiral","Warden","Chief Warden","Swan","Magma Admiral","Fishman Lord","Wysper","Thunder God","Cyborg","Saber Expert"}
elseif Second_Sea then
    tableBoss = {"Diamond","Jeremy","Fajita","Don Swan","Smoke Admiral","Cursed Captain","Darkbeard","Order","Awakened Ice Admiral","Tide Keeper"}
elseif Third_Sea then
    tableBoss = {"Stone","Island Empress","Kilo Admiral","Captain Elephant","Beautiful Pirate","rip_indra True Form","Longma","Soul Reaper","Cake Queen"}
end

	local selectedBoss = Main:Dropdown('Chọn Boss',tableBoss,function(bosslist)
	  SelectBoss = bosslist
	  end)
	
	Main:Toggle('cày Boss',AutoFarmBossQuest,function(afbq)
	  AutoFarmBossQuest = afbq
	  end)
      spawn(function()
        while wait() do
            if AutoFarmBossQuest then
                pcall(function()
                    if game:GetService("Workspace").Enemies:FindFirstChild(SelectBoss) then
                        for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
                            if v.Name == SelectBoss then
                                if v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") and v.Humanoid.Health > 0 then
                                   repeat wait()
                                        AutoHaki()
                                        EquipTool(SelectWeapon)
                                        click()
                                        v.HumanoidRootPart.CanCollide = false
                                        v.Humanoid.WalkSpeed = 0
                                        v.HumanoidRootPart.Size = Vector3.new(80,80,80)                             
                                        Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
                                    until not AutoFarmBossQuest or not v.Parent or v.Humanoid.Health <= 0
                                end
                            end
                        end
                    else
                        if game:GetService("ReplicatedStorage"):FindFirstChild(SelectBoss) then
                            Tween(game:GetService("ReplicatedStorage"):FindFirstChild(SelectBoss).HumanoidRootPart.CFrame * CFrame.new(5,10,7))
                        end
                    end
                end)
            end
        end
    end)
      Main:Toggle('Cày boss bí ẩn', AutoEliteHunter, function(autoelitefunc)
        AutoEliteHunter = autoelitefunc
        CancelTween(AutoEliteHunter)
    end)

    spawn(function()
        while task.wait() do
            if AutoEliteHunter then
                pcall(function()
                    if game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Visible == true then
                        if string.find(game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Container.QuestTitle.Title.Text,"Diablo") or string.find(game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Container.QuestTitle.Title.Text,"Deandre") or string.find(game:GetService("Players").LocalPlayer.PlayerGui.Main.Quest.Container.QuestTitle.Title.Text,"Urban") then
                            if game:GetService("Workspace").Enemies:FindFirstChild("Diablo") or game:GetService("Workspace").Enemies:FindFirstChild("Deandre") or game:GetService("Workspace").Enemies:FindFirstChild("Urban") then
                                for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
                                    if v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") and v.Humanoid.Health > 0 then
                                        if v.Name == "Diablo" or v.Name == "Deandre" or v.Name == "Urban" then
                                            repeat task.wait()
                                                EquipTool(SelectWeapon)
                                                click()
                                                Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
                                                MonsterPosition = v.HumanoidRootPart.CFrame
                                                v.HumanoidRootPart.CFrame = v.HumanoidRootPart.CFrame
                                                v.Humanoid.JumpPower = 0
                                                v.Humanoid.WalkSpeed = 0
                                                v.HumanoidRootPart.CanCollide = false
                                                FarmPos = v.HumanoidRootPart.CFrame
                                                MonFarm = v.Name
                                                --Click()
												--ClickCamera()
                                                v.HumanoidRootPart.Size = Vector3.new(60,60,60)
                                            until AutoEliteHunter == false or v.Humanoid.Health <= 0 or not v.Parent
                                        end
                                    end
                                end
                            else
                                if game:GetService("ReplicatedStorage"):FindFirstChild("Diablo") then
                                    Tween(game:GetService("ReplicatedStorage"):FindFirstChild("Diablo").HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
                                elseif game:GetService("ReplicatedStorage"):FindFirstChild("Deandre") then
                                    Tween(game:GetService("ReplicatedStorage"):FindFirstChild("Deandre").HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
                                elseif game:GetService("ReplicatedStorage"):FindFirstChild("Urban") then
                                    Tween(game:GetService("ReplicatedStorage"):FindFirstChild("Urban").HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
                                end
                            end
                        end
                    else
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("EliteHunter")
                    end
                end)
            end
        end
    end)


    Main:Label("Sea Event")

    Main:Button("Mua Thuyền",function()
        TP2(CFrame.new(-16921.853515625, 9.0863618850708, 433.9601135253906))
        wait(0.5)
        local args = {
        [1] = "BuyBoat",
        [2] = "PirateBrigade"
        }
        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer(unpack(args))   
    end)

    Main:Toggle("Tăng Tốc Thuyền",false,function(v)
        _G.SpeedBoats = v
    end)

    spawn(function()
        while wait() do
            if _G.SpeedBoats then
                for i, v in pairs(workspace.Boats:GetChildren()) do
                    if v:FindFirstChild("Owner") then
                        if v:FindFirstChild("Owner").Value == plr then
                            table.foreach(v:GetDescendants(), function(a, child)
                                if child:IsA("BasePart") or child:IsA("MeshPart") or child:IsA("Part") then
                                child.CanCollide = false
                                end
                            end)
                            v:FindFirstChild("Humanoid"):GetPropertyChangedSignal("Value"):Connect(function(g)
                                if g == 0 then
                                print("Vailon")
                            end
                        end)
                        repeat wait()
                            plr.Character:SetPrimaryPartCFrame(v:FindFirstChild("VehicleSeat").CFrame * CFrame.new(0, 3, 0))
                            until plr.Character:FindFirstChildOfClass("Humanoid").Sit == true
                            v:FindFirstChild("VehicleSeat").MaxSpeed = 350
                        end
                    end
                end
            end
        end
    end)
    Main:Toggle("Thuyền Xuyên Đá",false,function(v)
        getgenv().Nocliprock = v
    end)
    spawn(function()
        while wait() do
            if getgenv().Nocliprock then
                if game.Players.LocalPlayer.Character.Humanoid.Sit == true then
                    for _, v in pairs(game.Workspace.Boats:GetDescendants()) do
                        if v:IsA("BasePart") and v.CanCollide == true then
                            v.CanCollide = false
                        end
                    end
                    for _, v in pairs(game.Players.LocalPlayer.Character:GetDescendants()) do
                        if v:IsA("BasePart") and v.CanCollide == true then
                            v.CanCollide = false
                        end
                    end
                elseif game.Players.LocalPlayer.Character.Humanoid.Sit == false then
                    for _, v in pairs(game.Workspace.Boats:GetDescendants()) do
                        if v:IsA("BasePart") and v.CanCollide == false then
                            v.CanCollide = true
                        end
                    end
                    for _, v in pairs(game.Players.LocalPlayer.Character:GetDescendants()) do
                        if v:IsA("BasePart") and v.CanCollide == false then
                            v.CanCollide = true
                        end
                    end
                end
            end
        end
    end)

Main:Toggle("Giết Tất Cả Cá",false,function(v)
    getgenv().AutoFishCrew = v
    getgenv().AutoTerrorshark = v
    getgenv().farmpiranya = v
    getgenv().AutoShark = v
end)
spawn(function()
    while wait() do
        if getgenv().AutoFishCrew then
            pcall(function()
                if game:GetService("Workspace").Enemies:FindFirstChild("Fish Crew Member") then
                    for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
                        if v.Name == "Fish Crew Member" then
                            if v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") and v.Humanoid.Health > 0 then
                               repeat wait(0.1)
                             
                                    AutoHaki()
                                    EquipTool(SelectWeapon)
                                    click()
                                    v.HumanoidRootPart.CanCollide = false
                                    v.Humanoid.WalkSpeed = 0
                                    v.HumanoidRootPart.Size = Vector3.new(50,50,50)
                                    Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
                        
                                    game.Players.LocalPlayer.Character.Humanoid.Sit = false
                                until not getgenv().AutoFishCrew or not v.Parent or v.Humanoid.Health <= 0
                            end
                        
                        end
                    end
                else
              
                    Tween(game:GetService("Workspace").Boats.PirateGrandBrigade.VehicleSeat.CFrame * CFrame.new(0,1,0))
                    if game:GetService("ReplicatedStorage"):FindFirstChild("Fish Crew Member") then
                        Tween(game:GetService("ReplicatedStorage"):FindFirstChild("Fish Crew Member").HumanoidRootPart.CFrame * CFrame.new(2,20,2))
                    else
                       
                    end
                end
    
            end)
        end
    end
end)
spawn(function()
    while wait() do
        if getgenv().AutoShark then
            pcall(function()
                if game:GetService("Workspace").Enemies:FindFirstChild("Shark") then
                    for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
                        if v.Name == "Shark" then
                            if v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") and v.Humanoid.Health > 0 then
                               repeat wait(0.1)
                             
                                    AutoHaki()
                                    EquipTool(SelectWeapon)
                                    click()
                                    v.HumanoidRootPart.CanCollide = false
                                    v.Humanoid.WalkSpeed = 0
                                    v.HumanoidRootPart.Size = Vector3.new(50,50,50)
                                    Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
                                    game.Players.LocalPlayer.Character.Humanoid.Sit = false
                                until not getgenv().AutoShark or not v.Parent or v.Humanoid.Health <= 0
                            end
                        end
                    end
                else
                    Tween(game:GetService("Workspace").Boats.PirateGrandBrigade.VehicleSeat.CFrame * CFrame.new(0,1,0))
                    if game:GetService("ReplicatedStorage"):FindFirstChild("Terrorshark") then
                        Tween(game:GetService("ReplicatedStorage"):FindFirstChild("Terrorshark").HumanoidRootPart.CFrame * CFrame.new(2,20,2))
                    else
                    end
                end
            end)

        end
    end
end)
spawn(function()
    while wait() do
        if getgenv().farmpiranya then
            pcall(function()
                if game:GetService("Workspace").Enemies:FindFirstChild("Piranha") then
                    for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
                        if v.Name == "Piranha" then
                            if v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") and v.Humanoid.Health > 0 then
                               repeat wait(0.1)
                             
                                    AutoHaki()
                                    EquipTool(SelectWeapon)
                                    click()
                                    v.HumanoidRootPart.CanCollide = false
                                    v.Humanoid.WalkSpeed = 0
                                    v.HumanoidRootPart.Size = Vector3.new(50,50,50)
                                    Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
                                until not getgenv().farmpiranya or not v.Parent or v.Humanoid.Health <= 0
                            end
                        end
                    end
                else
                 
                    if game:GetService("ReplicatedStorage"):FindFirstChild("Piranha") then
                        Tween(game:GetService("ReplicatedStorage"):FindFirstChild("Piranha").HumanoidRootPart.CFrame * CFrame.new(2,20,2))
                    else  
                    end
                end
    
            end)
        end
    end
 end)
 spawn(function()
    while wait() do
        if getgenv().AutoTerrorshark then
            pcall(function()
                if game:GetService("Workspace").Enemies:FindFirstChild("Terrorshark") then
                    for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
                        if v.Name == "Terrorshark" then
                            if v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") and v.Humanoid.Health > 0 then
                               repeat wait(0.1)
                             
                                    AutoHaki()
                                    EquipTool(SelectWeapon)
                                    click()
                                    v.HumanoidRootPart.CanCollide = false
                                    v.Humanoid.WalkSpeed = 0
                                    v.HumanoidRootPart.Size = Vector3.new(50,50,50)
                                    Tween(v.HumanoidRootPart.CFrame * CFrame.new(posX,posY,posZ))
                                until not getgenv().AutoTerrorshark or not v.Parent or v.Humanoid.Health <= 0
                            end
                        end
                    end
                else
                  
                    if game:GetService("ReplicatedStorage"):FindFirstChild("Terrorshark") then
                        Tween(game:GetService("ReplicatedStorage"):FindFirstChild("Terrorshark").HumanoidRootPart.CFrame * CFrame.new(2,20,2))
                    else
                    end
                end
            end)

        end
    end
 end)

Main:Label("Kitsune")

Main:Toggle("Đến Đảo Kitsune",false,function(v)
    getgenv().TweenToKitsune = v
end)
spawn(function()
    local kitsuneIsland
    while not kitsuneIsland do
        kitsuneIsland = game:GetService("Workspace").Map:FindFirstChild("KitsuneIsland")
        wait(1)
    end
    while wait() do
        if getgenv().TweenToKitsune then
            local shrineActive = kitsuneIsland:FindFirstChild("ShrineActive")
            if shrineActive then
                for _, v in pairs(shrineActive:GetDescendants()) do
                    if v:IsA("BasePart") and v.Name:find("NeonShrinePart") then
                        Tween(v.CFrame)
                    end
                end
            end
        end
    end
end)

Main:Toggle("Nhặt Hồn Lửa",false,function(v)
    getgenv().CollectAzure = v
end)
spawn(function()
while wait() do
  if getgenv().CollectAzure then
      pcall(function()
          if game:GetService("Workspace"):FindFirstChild("AttachedAzureEmber") then
              Tween(game:GetService("Workspace"):WaitForChild("EmberTemplate"):FindFirstChild("Part").CFrame)
              print("Azure")
          end
      end)
  end
end
end)

-------items
    Main:Label("Lấy Cận Chiến")
    Main:Toggle("Tự Động Superhuman",_G.AutoSuperhuman,function(value)
        _G.AutoSuperhuman = value
    end)
    
    spawn(function()
        pcall(function()
            while wait() do 
                if _G.AutoSuperhuman then
                    if game.Players.LocalPlayer.Backpack:FindFirstChild("Combat") or game.Players.LocalPlayer.Character:FindFirstChild("Combat") and game:GetService("Players")["LocalPlayer"].Data.Beli.Value >= 150000 then
                        UnEquipWeapon("Combat")
                        wait(.1)
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyBlackLeg")
                    end   
                    if game.Players.LocalPlayer.Character:FindFirstChild("Superhuman") or game.Players.LocalPlayer.Backpack:FindFirstChild("Superhuman") then
                        _G.SelectWeapon = "Superhuman"
                    end  
                    if game.Players.LocalPlayer.Backpack:FindFirstChild("Black Leg") or game.Players.LocalPlayer.Character:FindFirstChild("Black Leg") or game.Players.LocalPlayer.Backpack:FindFirstChild("Electro") or game.Players.LocalPlayer.Character:FindFirstChild("Electro") or game.Players.LocalPlayer.Backpack:FindFirstChild("Fishman Karate") or game.Players.LocalPlayer.Character:FindFirstChild("Fishman Karate") or game.Players.LocalPlayer.Backpack:FindFirstChild("Dragon Claw") or game.Players.LocalPlayer.Character:FindFirstChild("Dragon Claw") then
                        if game.Players.LocalPlayer.Backpack:FindFirstChild("Black Leg") and game.Players.LocalPlayer.Backpack:FindFirstChild("Black Leg").Level.Value <= 299 then
                            _G.SelectWeapon = "Black Leg"
                        end
                        if game.Players.LocalPlayer.Backpack:FindFirstChild("Electro") and game.Players.LocalPlayer.Backpack:FindFirstChild("Electro").Level.Value <= 299 then
                            _G.SelectWeapon = "Electro"
                        end
                        if game.Players.LocalPlayer.Backpack:FindFirstChild("Fishman Karate") and game.Players.LocalPlayer.Backpack:FindFirstChild("Fishman Karate").Level.Value <= 299 then
                            _G.SelectWeapon = "Fishman Karate"
                        end
                        if game.Players.LocalPlayer.Backpack:FindFirstChild("Dragon Claw") and game.Players.LocalPlayer.Backpack:FindFirstChild("Dragon Claw").Level.Value <= 299 then
                            _G.SelectWeapon = "Dragon Claw"
                        end
                        if game.Players.LocalPlayer.Backpack:FindFirstChild("Black Leg") and game.Players.LocalPlayer.Backpack:FindFirstChild("Black Leg").Level.Value >= 300 and game:GetService("Players")["LocalPlayer"].Data.Beli.Value >= 300000 then
                            UnEquipWeapon("Black Leg")
                            wait(.1)
                            game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyElectro")
                        end
                        if game.Players.LocalPlayer.Character:FindFirstChild("Black Leg") and game.Players.LocalPlayer.Character:FindFirstChild("Black Leg").Level.Value >= 300 and game:GetService("Players")["LocalPlayer"].Data.Beli.Value >= 300000 then
                            UnEquipWeapon("Black Leg")
                            wait(.1)
                            game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyElectro")
                        end
                        if game.Players.LocalPlayer.Backpack:FindFirstChild("Electro") and game.Players.LocalPlayer.Backpack:FindFirstChild("Electro").Level.Value >= 300 and game:GetService("Players")["LocalPlayer"].Data.Beli.Value >= 750000 then
                            UnEquipWeapon("Electro")
                            wait(.1)
                            game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyFishmanKarate")
                        end
                        if game.Players.LocalPlayer.Character:FindFirstChild("Electro") and game.Players.LocalPlayer.Character:FindFirstChild("Electro").Level.Value >= 300 and game:GetService("Players")["LocalPlayer"].Data.Beli.Value >= 750000 then
                            UnEquipWeapon("Electro")
                            wait(.1)
                            game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyFishmanKarate")
                        end
                        if game.Players.LocalPlayer.Backpack:FindFirstChild("Fishman Karate") and game.Players.LocalPlayer.Backpack:FindFirstChild("Fishman Karate").Level.Value >= 300 and game:GetService("Players")["Localplayer"].Data.Fragments.Value >= 1500 then
                            UnEquipWeapon("Fishman Karate")
                            wait(.1)
                            game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BlackbeardReward","DragonClaw","1")
                            game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BlackbeardReward","DragonClaw","2") 
                        end
                        if game.Players.LocalPlayer.Character:FindFirstChild("Fishman Karate") and game.Players.LocalPlayer.Character:FindFirstChild("Fishman Karate").Level.Value >= 300 and game:GetService("Players")["Localplayer"].Data.Fragments.Value >= 1500 then
                            UnEquipWeapon("Fishman Karate")
                            wait(.1)
                            game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BlackbeardReward","DragonClaw","1")
                            game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BlackbeardReward","DragonClaw","2") 
                        end
                        if game.Players.LocalPlayer.Backpack:FindFirstChild("Dragon Claw") and game.Players.LocalPlayer.Backpack:FindFirstChild("Dragon Claw").Level.Value >= 300 and game:GetService("Players")["LocalPlayer"].Data.Beli.Value >= 3000000 then
                            UnEquipWeapon("Dragon Claw")
                            wait(.1)
                            game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuySuperhuman")
                        end
                        if game.Players.LocalPlayer.Character:FindFirstChild("Dragon Claw") and game.Players.LocalPlayer.Character:FindFirstChild("Dragon Claw").Level.Value >= 300 and game:GetService("Players")["LocalPlayer"].Data.Beli.Value >= 3000000 then
                            UnEquipWeapon("Dragon Claw")
                            wait(.1)
                            game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuySuperhuman")
                        end 
                    end
                end
            end
        end)
    end)
    
   Main:Toggle("Tự Động DeathStep",_G.AutoDeathStep,function(value)
        _G.AutoDeathStep = value
    end)
    
    spawn(function()
        while wait() do wait()
            if _G.AutoDeathStep then
                if game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Black Leg") or game:GetService("Players").LocalPlayer.Character:FindFirstChild("Black Leg") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Death Step") or game:GetService("Players").LocalPlayer.Character:FindFirstChild("Death Step") then
                    if game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Black Leg") and game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Black Leg").Level.Value >= 450 then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyDeathStep")
                        _G.SelectWeapon = "Death Step"
                    end  
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Black Leg") and game:GetService("Players").LocalPlayer.Character:FindFirstChild("Black Leg").Level.Value >= 450 then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyDeathStep")
                        _G.SelectWeapon = "Death Step"
                    end  
                    if game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Black Leg") and game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Black Leg").Level.Value <= 449 then
                        _G.SelectWeapon = "Black Leg"
                    end 
                else 
                    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyBlackLeg")
                end
            end
        end
    end)
    
   Main:Toggle("Tự Động Sharkman Karate",_G.AutoSharkman,function(value)
        _G.AutoSharkman = value
    end)
    
    spawn(function()
        pcall(function()
            while wait() do
                if _G.AutoSharkman then
                    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyFishmanKarate")
                    if string.find(game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuySharkmanKarate"), "keys") then  
                        if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Water Key") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Water Key") then
                            Tween(CFrame.new(-2604.6958, 239.432526, -10315.1982, 0.0425701365, 0, -0.999093413, 0, 1, 0, 0.999093413, 0, 0.0425701365))
                            game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuySharkmanKarate")
                        elseif game:GetService("Players").LocalPlayer.Character:FindFirstChild("Fishman Karate") and game:GetService("Players").LocalPlayer.Character:FindFirstChild("Fishman Karate").Level.Value >= 400 then
                        else 
                            Ms = "Tide Keeper"
                            if game:GetService("Workspace").Enemies:FindFirstChild(Ms) then   
                                for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
                                    if v.Name == Ms then    
                                        OldCFrameShark = v.HumanoidRootPart.CFrame
                                        repeat task.wait()
                                            AutoHaki()
                                            EquipTool(_G.SelectWeapon)
                                            v.Head.CanCollide = false
                                            v.Humanoid.WalkSpeed = 0
                                            v.HumanoidRootPart.CanCollide = false
                                            v.HumanoidRootPart.Size = Vector3.new(50,50,50)
                                            v.HumanoidRootPart.CFrame = OldCFrameShark
                                            Tween(v.HumanoidRootPart.CFrame*CFrame.new(2,20,2))
                                            game:GetService("VirtualUser"):CaptureController()
                                            game:GetService("VirtualUser"):Button1Down(Vector2.new(1280, 670))
                                            sethiddenproperty(game:GetService("Players").LocalPlayer,"SimulationRadius",math.huge)
                                        until not v.Parent or v.Humanoid.Health <= 0 or _G.AutoSharkman == false or game:GetService("Players").LocalPlayer.Character:FindFirstChild("Water Key") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Water Key")
                                    end
                                end
                            else
                                Tween(CFrame.new(-3570.18652, 123.328949, -11555.9072, 0.465199202, -1.3857326e-08, 0.885206044, 4.0332897e-09, 1, 1.35347511e-08, -0.885206044, -2.72606271e-09, 0.465199202))
                                wait(3)
                            end
                        end
                    else 
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuySharkmanKarate")
                    end
                end
            end
        end)
    end)
    
    Main:Toggle("Tự Động Electric Claw",_G.AutoElectricClaw,function(value)
        _G.AutoElectricClaw = value
        StopTween(_G.AutoElectricClaw)
    end)
    
    spawn(function()
        pcall(function()
            while wait() do 
                if _G.AutoElectricClaw then
                    if game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Electro") or game:GetService("Players").LocalPlayer.Character:FindFirstChild("Electro") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Electric Claw") or game:GetService("Players").LocalPlayer.Character:FindFirstChild("Electric Claw") then
                        if game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Electro") and game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Electro").Level.Value >= 400 then
                            game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyElectricClaw")
                            _G.SelectWeapon = "Electric Claw"
                        end  
                        if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Electro") and game:GetService("Players").LocalPlayer.Character:FindFirstChild("Electro").Level.Value >= 400 then
                            game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyElectricClaw")
                            _G.SelectWeapon = "Electric Claw"
                        end  
                        if game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Electro") and game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Electro").Level.Value <= 399 then
                            _G.SelectWeapon = "Electro"
                        end 
                    else
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyElectro")
                    end
                end
                if _G.AutoElectricClaw then
                    if game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Electro") or game:GetService("Players").LocalPlayer.Character:FindFirstChild("Electro") then
                        if game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Electro") or game:GetService("Players").LocalPlayer.Character:FindFirstChild("Electro") and game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Electro").Level.Value >= 400 or game:GetService("Players").LocalPlayer.Character:FindFirstChild("Electro").Level.Value >= 400 then
                            if _G.AutoFarm == false then
                                repeat task.wait()
                                    Tween(CFrame.new(-10371.4717, 330.764496, -10131.4199))
                                until not _G.AutoElectricClaw or (game:GetService("Players").LocalPlayer.Character.HumanoidRootPart.Position - CFrame.new(-10371.4717, 330.764496, -10131.4199).Position).Magnitude <= 10
                                game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyElectricClaw","Start")
                                wait(2)
                                repeat task.wait()
                                    Tween(CFrame.new(-12550.532226563, 336.22631835938, -7510.4233398438))
                                until not _G.AutoElectricClaw or (game:GetService("Players").LocalPlayer.Character.HumanoidRootPart.Position - CFrame.new(-12550.532226563, 336.22631835938, -7510.4233398438).Position).Magnitude <= 10
                                wait(1)
                                repeat task.wait()
                                    Tween(CFrame.new(-10371.4717, 330.764496, -10131.4199))
                                until not _G.AutoElectricClaw or (game:GetService("Players").LocalPlayer.Character.HumanoidRootPart.Position - CFrame.new(-10371.4717, 330.764496, -10131.4199).Position).Magnitude <= 10
                                wait(1)
                                game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyElectricClaw")
                            elseif _G.AutoFarm == true then
                                _G.AutoFarm = false
                                wait(1)
                                repeat task.wait()
                                    Tween(CFrame.new(-10371.4717, 330.764496, -10131.4199))
                                until not _G.AutoElectricClaw or (game:GetService("Players").LocalPlayer.Character.HumanoidRootPart.Position - CFrame.new(-10371.4717, 330.764496, -10131.4199).Position).Magnitude <= 10
                                game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyElectricClaw","Start")
                                wait(2)
                                repeat task.wait()
                                    Tween(CFrame.new(-12550.532226563, 336.22631835938, -7510.4233398438))
                                until not _G.AutoElectricClaw or (game:GetService("Players").LocalPlayer.Character.HumanoidRootPart.Position - CFrame.new(-12550.532226563, 336.22631835938, -7510.4233398438).Position).Magnitude <= 10
                                wait(1)
                                repeat task.wait()
                                    Tween(CFrame.new(-10371.4717, 330.764496, -10131.4199))
                                until not _G.AutoElectricClaw or (game:GetService("Players").LocalPlayer.Character.HumanoidRootPart.Position - CFrame.new(-10371.4717, 330.764496, -10131.4199).Position).Magnitude <= 10
                                wait(1)
                                game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyElectricClaw")
                                _G.SelectWeapon = "Electric Claw"
                                wait(.1)
                                _G.AutoFarm = true
                            end
                        end
                    end
                end
            end
        end)
    end)
    
   Main:Toggle("Tự Động Dragon Talon",_G.AutoDragonTalon,function(value)
        _G.AutoDragonTalon = value
    end)
    
    spawn(function()
        while wait() do
            if _G.AutoDragonTalon then
                if game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Dragon Claw") or game:GetService("Players").LocalPlayer.Character:FindFirstChild("Dragon Claw") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Dragon Talon") or game:GetService("Players").LocalPlayer.Character:FindFirstChild("Dragon Talon") then
                    if game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Dragon Claw") and game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Dragon Claw").Level.Value >= 400 then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyDragonTalon")
                        _G.SelectWeapon = "Dragon Talon"
                    end  
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Dragon Claw") and game:GetService("Players").LocalPlayer.Character:FindFirstChild("Dragon Claw").Level.Value >= 400 then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyDragonTalon")
                        _G.SelectWeapon = "Dragon Talon"
                    end  
                    if game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Dragon Claw") and game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Dragon Claw").Level.Value <= 399 then
                        _G.SelectWeapon = "Dragon Claw"
                    end 
                else 
                    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BlackbeardReward","DragonClaw","2")
                end
            end
        end
    end)
    
   Main:Toggle("Tự Động GodHuman",_G.Auto_God_Human,function(value)
 _G.Auto_God_Human = value
end)
spawn(function()
    while task.wait() do
		if _G.Auto_God_Human then
			pcall(function()
				if game.Players.LocalPlayer.Character:FindFirstChild("Superhuman") or game.Players.LocalPlayer.Backpack:FindFirstChild("Superhuman") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Black Leg") or game:GetService("Players").LocalPlayer.Character:FindFirstChild("Black Leg") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Death Step") or game:GetService("Players").LocalPlayer.Character:FindFirstChild("Death Step") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Fishman Karate") or game:GetService("Players").LocalPlayer.Character:FindFirstChild("Fishman Karate") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Sharkman Karate") or game:GetService("Players").LocalPlayer.Character:FindFirstChild("Sharkman Karate") or game.Players.LocalPlayer.Backpack:FindFirstChild("Electro") or game.Players.LocalPlayer.Character:FindFirstChild("Electro") or game.Players.LocalPlayer.Backpack:FindFirstChild("Electric Claw") or game.Players.LocalPlayer.Character:FindFirstChild("Electric Claw") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Dragon Claw") or game:GetService("Players").LocalPlayer.Character:FindFirstChild("Dragon Claw") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Dragon Talon") or game:GetService("Players").LocalPlayer.Character:FindFirstChild("Dragon Talon") or game.Players.LocalPlayer.Character:FindFirstChild("Godhuman") or game.Players.LocalPlayer.Backpack:FindFirstChild("Godhuman") then
					if game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuySuperhuman",true) == 1 then
						if game.Players.LocalPlayer.Backpack:FindFirstChild("Superhuman") and game.Players.LocalPlayer.Backpack:FindFirstChild("Superhuman").Level.Value >= 400 or game.Players.LocalPlayer.Character:FindFirstChild("Superhuman") and game.Players.LocalPlayer.Character:FindFirstChild("Superhuman").Level.Value >= 400 then
							game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyDeathStep")
						end
					else
						game.StarterGui:SetCore("SendNotification", {
							Title = "Notification", 
							Text = "Not Have Superhuman" ,
							Icon = "",
							Duration = 2.5
						})
					end
					if game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyDeathStep",true) == 1 then
						if game.Players.LocalPlayer.Backpack:FindFirstChild("Death Step") and game.Players.LocalPlayer.Backpack:FindFirstChild("Death Step").Level.Value >= 400 or game.Players.LocalPlayer.Character:FindFirstChild("Death Step") and game.Players.LocalPlayer.Character:FindFirstChild("Death Step").Level.Value >= 400 then
							game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuySharkmanKarate")
						end
					else
						game.StarterGui:SetCore("SendNotification", {
							Title = "Notification", 
							Text = "Not Have Death Step" ,
							Icon = "",
							Duration = 2.5
						})
					end
					if game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuySharkmanKarate",true) == 1 then
						if game.Players.LocalPlayer.Backpack:FindFirstChild("Sharkman Karate") and game.Players.LocalPlayer.Backpack:FindFirstChild("Sharkman Karate").Level.Value >= 400 or game.Players.LocalPlayer.Character:FindFirstChild("Sharkman Karate") and game.Players.LocalPlayer.Character:FindFirstChild("Sharkman Karate").Level.Value >= 400 then
							game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyElectricClaw")
						end
					else
						game.StarterGui:SetCore("SendNotification", {
							Title = "Notification", 
							Text = "Not Have SharkMan Karate" ,
							Icon = "",
							Duration = 2.5
						})
					end
					if game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyElectricClaw",true) == 1 then
						if game.Players.LocalPlayer.Backpack:FindFirstChild("Electric Claw") and game.Players.LocalPlayer.Backpack:FindFirstChild("Electric Claw").Level.Value >= 400 or game.Players.LocalPlayer.Character:FindFirstChild("Electric Claw") and game.Players.LocalPlayer.Character:FindFirstChild("Electric Claw").Level.Value >= 400 then
							game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyDragonTalon")
						end
					else
						game.StarterGui:SetCore("SendNotification", {
							Title = "Notification", 
							Text = "Not Have Electric Claw" ,
							Icon = "",
							Duration = 2.5
						})
					end
					if game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyDragonTalon",true) == 1 then
						if game.Players.LocalPlayer.Backpack:FindFirstChild("Dragon Talon") and game.Players.LocalPlayer.Backpack:FindFirstChild("Dragon Talon").Level.Value >= 400 or game.Players.LocalPlayer.Character:FindFirstChild("Dragon Talon") and game.Players.LocalPlayer.Character:FindFirstChild("Dragon Talon").Level.Value >= 400 then
							if string.find(game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyGodhuman",true), "Bring") then
								game.StarterGui:SetCore("SendNotification", {
									Title = "Notification", 
									Text = "Not Have Enough Material" ,
									Icon = "",
									Duration = 2.5
								})
							else
								game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyGodhuman")
							end
						end
					else
						game.StarterGui:SetCore("SendNotification", {
							Title = "Notification", 
							Text = "Not Have Dragon Talon" ,
							Icon = "",
							Duration = 2.5
						})
					end
				else
					game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuySuperhuman")
				end
			end)
		end
	end
end)

Main:Label("Lấy Vật Phẩm")
Main:Toggle("Lấy Yama",_G.AutoYama,function(value)
    _G.AutoYama = value
end)
spawn(function()
    while wait() do
        if _G.AutoYama then
            if game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("EliteHunter","Progress") >= 30 then
                repeat wait(.1)
                    fireclickdetector(game:GetService("Workspace").Map.Waterfall.SealedKatana.Handle.ClickDetector)
                until game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Yama") or not _G.AutoYama
            end
        end
    end
end)


Main:Toggle("Lấy Tushita", _G.Autotushita,function(value)
    _G.Autotushita = value
  
end)
spawn(function()
   while wait() do
       if  _G.Autotushita and Third_Sea then
           pcall(function()
               if game:GetService("Workspace").Enemies:FindFirstChild("Longma") then
                   for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
                       if v.Name == "Longma" then
                           if v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") and v.Humanoid.Health > 0 then
                               repeat task.wait()
                                   AutoHaki()
                                   EquipTool(SelectWeapon)
                                   v.HumanoidRootPart.CanCollide = false
                                   v.Humanoid.WalkSpeed = 0
                                   v.HumanoidRootPart.Size = Vector3.new(50,50,50)
                                   TP2(v.HumanoidRootPart.CFrame * CFrame.new(PosX,PosY,PosZ))
                                   game:GetService("VirtualUser"):CaptureController()
                                   game:GetService("VirtualUser"):Button1Down(Vector2.new(1280,672))
                                   sethiddenproperty(game.Players.LocalPlayer,"SimulationRadius",math.huge)
                               until not  _G.Autotushita or not v.Parent or v.Humanoid.Health <= 0
                           end
                       end
                   end
               else
               TP2(CFrame.new(-10238.875976563, 389.7912902832, -9549.7939453125))
                   if game:GetService("ReplicatedStorage"):FindFirstChild("Longma") then
                       TP2(game:GetService("ReplicatedStorage"):FindFirstChild("Longma").HumanoidRootPart.CFrame * CFrame.new(2,20,2))
                   else
                       
                   end
               end
           end)
       end
   end
end)
Main:Toggle("Lấy Cavander", _G.AutoCarvender,function(value)
    _G.AutoCarvender = value
end)

spawn(function()
   while wait() do
       if  _G.AutoCarvender and Third_Sea then
           pcall(function()
               if game:GetService("Workspace").Enemies:FindFirstChild("Beautiful Pirate") then
                   for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
                       if v.Name == "Beautiful Pirate" then
                           if v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") and v.Humanoid.Health > 0 then
                               repeat task.wait()
                                   AutoHaki()
                                   EquipTool(SelectWeapon)
                                   v.HumanoidRootPart.CanCollide = false
                                   v.Humanoid.WalkSpeed = 0
                                   v.HumanoidRootPart.Size = Vector3.new(50,50,50)
                                   TP2(v.HumanoidRootPart.CFrame * CFrame.new(PosX,PosY,PosZ))
                                   game:GetService("VirtualUser"):CaptureController()
                                   game:GetService("VirtualUser"):Button1Down(Vector2.new(1280,672))
                                   sethiddenproperty(game.Players.LocalPlayer,"SimulationRadius",math.huge)
                               until not  _G.AutoCarvender or not v.Parent or v.Humanoid.Health <= 0
                           end
                       end
                   end
               else
               TP2(CFrame.new(5311.07421875, 426.0243835449219, 165.12762451171875))
                   if game:GetService("ReplicatedStorage"):FindFirstChild("Beautiful Pirate") then
                       TP2(game:GetService("ReplicatedStorage"):FindFirstChild("Beautiful Pirate").HumanoidRootPart.CFrame * CFrame.new(2,20,2))
                   else
                   
                   end
               end
           end)
       end
   end
end)

Main:Toggle("Cày Pirate Raid", _G.AutoRaidPirate,function(value)
_G.AutoRaidPirate = value
end)
spawn(function()
while wait() do
   if _G.AutoRaidPirate then
       pcall(function()
           local CFrameBoss = CFrame.new(-5496.17432, 313.768921, -2841.53027, 0.924894512, 7.37058015e-09, 0.380223751, 3.5881019e-08, 1, -1.06665446e-07, -0.380223751, 1.12297109e-07, 0.924894512)
           if (CFrame.new(-5539.3115234375, 313.800537109375, -2972.372314453125).Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude <= 500 then
               for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
                   if _G.AutoRaidPirate and v:FindFirstChild("HumanoidRootPart") and v:FindFirstChild("Humanoid") and v.Humanoid.Health > 0 then
                       repeat wait()
                           AutoHaki()
                           EquipTool(SelectWeapon)
                           v.HumanoidRootPart.CanCollide = false
                           v.HumanoidRootPart.Size = Vector3.new(60, 60, 60)
                           TP2(v.HumanoidRootPart.CFrame * CFrame.new(PosX, PosY, PosZ))
                           Click()
                       until v.Humanoid.Health <= 0 or not v.Parent or not _G.AutoRaidPirate
                   end
               end
           else
               if ((CFrameBoss).Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).magnitude <= 1500 then
                   TP2(CFrameBoss)
               else
                   TP2(CFrameBoss)
               end
           end
       end)
   end
end
end)

Main:Toggle("Lấy Twin Hook", _G.AutoTwinHook,function(value)
    _G.AutoTwinHook = value
end)
spawn(function()
   while wait() do
       if  _G.AutoTwinHook and Third_Sea then
           pcall(function()
               if game:GetService("Workspace").Enemies:FindFirstChild("Captain Elephant") then
                   for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
                       if v.Name == "Captain Elephant" then
                           if v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") and v.Humanoid.Health > 0 then
                               repeat task.wait()
                                   AutoHaki()
                                   EquipTool(SelectWeapon)
                                   v.HumanoidRootPart.CanCollide = false
                                   v.Humanoid.WalkSpeed = 0
                                   v.HumanoidRootPart.Size = Vector3.new(50,50,50)
                                   TP2(v.HumanoidRootPart.CFrame * CFrame.new(PosX,PosY,PosZ))
                                   game:GetService("VirtualUser"):CaptureController()
                                   game:GetService("VirtualUser"):Button1Down(Vector2.new(1280,672))
                                   sethiddenproperty(game.Players.LocalPlayer,"SimulationRadius",math.huge)
                               until not  _G.AutoTwinHook or not v.Parent or v.Humanoid.Health <= 0
                           end
                       end
                   end
               else
               TP2(CFrame.new(-13348.0654296875, 405.8904113769531, -8570.62890625))
                   if game:GetService("ReplicatedStorage"):FindFirstChild("Captain Elephant") then
                       TP2(game:GetService("ReplicatedStorage"):FindFirstChild("Captain Elephant").HumanoidRootPart.CFrame * CFrame.new(2,20,2))
                   else
                   
                   end
               end
           end)
       end
   end
end)
Main:Toggle("Lấy Hallow Scythe",_G.AutoFarmBossHallow,function(value)
    _G.AutoFarmBossHallow = value
end)
spawn(function()
    while wait() do
        if _G.AutoFarmBossHallow then
            pcall(function()
                if game:GetService("Workspace").Enemies:FindFirstChild("Soul Reaper") then
                    for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
                        if string.find(v.Name , "Soul Reaper") then
                            repeat task.wait()
                                EquipTool(SelectWeapon)
                                AutoHaki()
                                v.HumanoidRootPart.Size = Vector3.new(50,50,50)
                                TP2(v.HumanoidRootPart.CFrame*CFrame.new(PosX,PosY,PosZ))
                                game:GetService("VirtualUser"):CaptureController()
                                game:GetService("VirtualUser"):Button1Down(Vector2.new(1280, 670))
                                v.HumanoidRootPart.Transparency = 1
                                sethiddenproperty(game.Players.LocalPlayer,"SimulationRadius",math.huge)
                            until v.Humanoid.Health <= 0 or _G.AutoFarmBossHallow == false
                        end
                    end
                elseif game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Hallow Essence") or game:GetService("Players").LocalPlayer.Character:FindFirstChild("Hallow Essence") then
                    repeat TP2(CFrame.new(-8932.322265625, 146.83154296875, 6062.55078125)) wait() until (CFrame.new(-8932.322265625, 146.83154296875, 6062.55078125).Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude <= 8                        
                    EquipWeapon("Hallow Essence")
                else
                    if game:GetService("ReplicatedStorage"):FindFirstChild("Soul Reaper") then
                        TP2(game:GetService("ReplicatedStorage"):FindFirstChild("Soul Reaper").HumanoidRootPart.CFrame * CFrame.new(2,20,2))
                    else
                
                    end
                end
            end)
        end
    end
end)
Main:Toggle("Đánh Boss Rip Indra",_G.AutoDarkDagger,function(value)
    _G.AutoDarkDagger = value
end)
    
spawn(function()
    pcall(function()
        while wait() do
            if _G.AutoDarkDagger then
                if game:GetService("Workspace").Enemies:FindFirstChild("rip_indra True Form") or game:GetService("Workspace").Enemies:FindFirstChild("rip_indra") then
                    for i,v in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
                        if v.Name == ("rip_indra True Form" or v.Name == "rip_indra") and v.Humanoid.Health > 0 and v:IsA("Model") and v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") then
                            repeat task.wait()
                                pcall(function()
                                    AutoHaki()
                                    EquipTool(SelectWeapon)
                                    v.HumanoidRootPart.CanCollide = false
                                    v.HumanoidRootPart.Size = Vector3.new(50,50,50)
                                    TP2(v.HumanoidRootPart.CFrame * CFrame.new(PosX,PosY,PosZ))
                                    game:GetService("VirtualUser"):CaptureController()
                                    game:GetService("VirtualUser"):Button1Down(Vector2.new(1280, 670),workspace.CurrentCamera.CFrame)
                                end)
                            until _G.AutoDarkDagger == false or v.Humanoid.Health <= 0
                        end
                    end
                else
                    TP2(CFrame.new(-5344.822265625, 423.98541259766, -2725.0930175781))
                end
            end
        end
    end)
end)
------------Stats
Stats:Toggle("Tự Động Nâng Chỉ số",_G.Auto_Stats_Kaitun,function(value)
	_G.Auto_Stats_Kaitun = value
	end)
	
	
	spawn(function()
		while wait() do
			pcall(function()
				if _G.Auto_Stats_Kaitun then
					if World1 then
						local args = {
							[1] = "AddPoint",
							[2] = "Melee",
							[3] = _G.Point
							}
							
						game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer(unpack(args))
					elseif World2 then
						local args = {
							[1] = "AddPoint",
							[2] = "Melee",
							[3] = _G.Point
							}
							
						game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer(unpack(args))
						local args = {
							[1] = "AddPoint",
							[2] = "Defense",
							[3] = _G.Point
							}
							
						game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer(unpack(args))
					end
				end
			end)
		end
	end)
	
	Stats:Toggle("Tự Động Nâng Melee",_G.Auto_Stats_Melee,function(value)
	 _G.Auto_Stats_Melee = value
	end)
	
	
	spawn(function()
		while wait() do
			if _G.Auto_Stats_Melee then
				local args = {
					[1] = "AddPoint",
					[2] = "Melee",
					[3] = _G.Point
				}
							
				game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer(unpack(args))
			end
		end
	end)
	
	Stats:Toggle("Tự Động Nâng Máu",_G.Auto_Stats_Defense,function(value)
	 _G.Auto_Stats_Defense = value
	end)
	
	
	spawn(function()
		while wait() do
			if _G.Auto_Stats_Defense then
				local args = {
					[1] = "AddPoint",
					[2] = "Defense",
					[3] = _G.Point
				}
							
				game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer(unpack(args))
			end
		end
	end)
	
	Stats:Toggle("Tự Động Nâng Kiếm",_G.Auto_Stats_Sword,function(value)
	 _G.Auto_Stats_Sword = value
	end)
	
	
	spawn(function()
		while wait() do
			if _G.Auto_Stats_Sword then
				local args = {
					[1] = "AddPoint",
					[2] = "Sword",
					[3] = _G.Point
				}
							
				game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer(unpack(args))
			end
		end
	end)
	
	Stats:Toggle("Tự Động Nâng súng",_G.Auto_Stats_Gun,function(value)
	 _G.Auto_Stats_Gun = value
	end)
	
	spawn(function()
		while wait() do
			if _G.Auto_Stats_Gun then
				local args = {
					[1] = "AddPoint",
					[2] = "Gun",
					[3] = _G.Point
				}
							
				game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer(unpack(args))
			end
		end
	end)
	
	Stats:Toggle("Tự Động Nâng Trái",_G.Auto_Stats_Devil_Fruit,function(value)
	 _G.Auto_Stats_Devil_Fruit = value
	end)
	
	
	spawn(function()
		while wait() do
			if _G.Auto_Stats_Devil_Fruit then
				local args = {
					[1] = "AddPoint",
					[2] = "Demon Fruit",
					[3] = _G.Point
				}
							
				game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer(unpack(args))
			end
		end
	end)
	
	
	
	Stats:Slider("Điểm",1,100,1,function(value)
	_G.Point = value
	return "Point : " .. tostring(value)
	end)


  
  ------------teleport

         
  Island:Button("Đến Sea 1",function()
    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("TravelMain")
    end)
   
   Island:Button("Đến Sea 2",function()
    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("TravelDressrosa")
   end)
  
   
   Island:Button("Đến Sea 3",function()
    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("TravelZou")
    end)


    ---------island


 if First_Sea then
 Island:Dropdown("Chọn Đảo", {
  "WindMill",
  "Marine",
  "Middle Town",
  "Jungle",
  "Pirate Village",
  "Desert",
  "Snow Island",
  "MarineFord",
  "Colosseum",
  "Sky Island 1",
  "Sky Island 2",
  "Sky Island 3",
  "Prison",
  "Magma Village",
  "Under Water Island",
  "Fountain City",
  "Shank Room",
  "Mob Island"
 },function(value)
  _G.SelectIsland = value
  end)
 end
 
 if Second_Sea then
 Island:Dropdown("Chọn Đảo", {
  "The Cafe",
  "Frist Spot",
  "Dark Area",
  "Flamingo Mansion",
  "Flamingo Room",
  "Green Zone",
  "Factory",
  "Colossuim",
  "Zombie Island",
  "Two Snow Mountain",
  "Punk Hazard",
  "Cursed Ship",
  "Ice Castle",
  "Forgotten Island",
  "Ussop Island",
  "Mini Sky Island"
 },function(value)
  _G.SelectIsland = value
  end)
 end
 
 if Third_Sea then
 Island:Dropdown("Chọn Đảo", {
  "Mansion",
  "Port Town",
  "Great Tree",
  "Castle On The Sea",
  "MiniSky",
  "Hydra Island",
  "Floating Turtle",
  "Haunted Castle",
  "Ice Cream Island",
  "Peanut Island",
  "Cake Island",
  "Snow Island"
 },function(value)
  _G.SelectIsland = value
  end)
 end

 Island:Toggle("Đến Đảo",false,function(value)
  _G.TeleportIsland = value
  if _G.TeleportIsland == true then
  repeat wait()
  if _G.SelectIsland == "WindMill" then
    Tween(CFrame.new(979.79895019531, 16.516613006592, 1429.0466308594))
  elseif _G.SelectIsland == "Marine" then
    Tween(CFrame.new(-2566.4296875, 6.8556680679321, 2045.2561035156))
  elseif _G.SelectIsland == "Middle Town" then
    Tween(CFrame.new(-690.33081054688, 15.09425163269, 1582.2380371094))
  elseif _G.SelectIsland == "Jungle" then
    Tween(CFrame.new(-1612.7957763672, 36.852081298828, 149.12843322754))
  elseif _G.SelectIsland == "Pirate Village" then
    Tween(CFrame.new(-1181.3093261719, 4.7514905929565, 3803.5456542969))
  elseif _G.SelectIsland == "Desert" then
    Tween(CFrame.new(944.15789794922, 20.919729232788, 4373.3002929688))
  elseif _G.SelectIsland == "Snow Island" then
    Tween(CFrame.new(1347.8067626953, 104.66806030273, -1319.7370605469))
  elseif _G.SelectIsland == "MarineFord" then
    Tween(CFrame.new(-4914.8212890625, 50.963626861572, 4281.0278320313))
  elseif _G.SelectIsland == "Colosseum" then
    Tween(CFrame.new(-1427.6203613281, 7.2881078720093, -2792.7722167969))
  elseif _G.SelectIsland == "Sky Island 1" then
    Tween(CFrame.new(-4869.1025390625, 733.46051025391, -2667.0180664063))
  elseif _G.SelectIsland == "Sky Island 2" then
    Tween:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("requestEntrance",Vector3.new(-4607.82275, 872.54248, -1667.55688))
  elseif _G.SelectIsland == "Sky Island 3" then
    Tween:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("requestEntrance",Vector3.new(-7894.6176757813, 5547.1416015625, -380.29119873047))
  elseif _G.SelectIsland == "Prison" then
    Tween(CFrame.new(4875.330078125, 5.6519818305969, 734.85021972656))
  elseif _G.SelectIsland == "Magma Village" then
    Tween(CFrame.new(-5247.7163085938, 12.883934020996, 8504.96875))
  elseif _G.SelectIsland == "Under Water Island" then
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("requestEntrance",Vector3.new(61163.8515625, 11.6796875, 1819.7841796875))
  elseif _G.SelectIsland == "Fountain City" then
    Tween(CFrame.new(5127.1284179688, 59.501365661621, 4105.4458007813))
  elseif _G.SelectIsland == "Shank Room" then
    Tween(CFrame.new(-1442.16553, 29.8788261, -28.3547478))
  elseif _G.SelectIsland == "Mob Island" then
    Tween(CFrame.new(-2850.20068, 7.39224768, 5354.99268))
  elseif _G.SelectIsland == "The Cafe" then
    Tween(CFrame.new(-380.47927856445, 77.220390319824, 255.82550048828))
  elseif _G.SelectIsland == "Frist Spot" then
    Tween(CFrame.new(-11.311455726624, 29.276733398438, 2771.5224609375))
  elseif _G.SelectIsland == "Dark Area" then
    Tween(CFrame.new(3780.0302734375, 22.652164459229, -3498.5859375))
  elseif _G.SelectIsland == "Flamingo Mansion" then
    Tween(CFrame.new(-483.73370361328, 332.0383605957, 595.32708740234))
  elseif _G.SelectIsland == "Flamingo Room" then
    Tween(CFrame.new(2284.4140625, 15.152037620544, 875.72534179688))
  elseif _G.SelectIsland == "Green Zone" then
    Tween(CFrame.new(-2448.5300292969, 73.016105651855, -3210.6306152344))
  elseif _G.SelectIsland == "Factory" then
    Tween(CFrame.new(424.12698364258, 211.16171264648, -427.54049682617))
  elseif _G.SelectIsland == "Colossuim" then
    Tween(CFrame.new(-1503.6224365234, 219.7956237793, 1369.3101806641))
  elseif _G.SelectIsland == "Zombie Island" then
    Tween(CFrame.new(-5622.033203125, 492.19604492188, -781.78552246094))
  elseif _G.SelectIsland == "Two Snow Mountain" then
    Tween(CFrame.new(753.14288330078, 408.23559570313, -5274.6147460938))
  elseif _G.SelectIsland == "Punk Hazard" then
    Tween(CFrame.new(-6127.654296875, 15.951762199402, -5040.2861328125))
  elseif _G.SelectIsland == "Cursed Ship" then
    Tween(CFrame.new(923.40197753906, 125.05712890625, 32885.875))
  elseif _G.SelectIsland == "Ice Castle" then
    Tween(CFrame.new(6148.4116210938, 294.38687133789, -6741.1166992188))
  elseif _G.SelectIsland == "Forgotten Island" then
    Tween(CFrame.new(-3032.7641601563, 317.89672851563, -10075.373046875))
  elseif _G.SelectIsland == "Ussop Island" then
    Tween(CFrame.new(4816.8618164063, 8.4599885940552, 2863.8195800781))
  elseif _G.SelectIsland == "Mini Sky Island" then
    Tween(CFrame.new(-288.74060058594, 49326.31640625, -35248.59375))
  elseif _G.SelectIsland == "Great Tree" then
    Tween(CFrame.new(2681.2736816406, 1682.8092041016, -7190.9853515625))
  elseif _G.SelectIsland == "Castle On The Sea" then
    Tween(CFrame.new(-5074.45556640625, 314.5155334472656, -2991.054443359375))
  elseif _G.SelectIsland == "MiniSky" then
    Tween(CFrame.new(-260.65557861328, 49325.8046875, -35253.5703125))
  elseif _G.SelectIsland == "Port Town" then
    Tween(CFrame.new(-290.7376708984375, 6.729952812194824, 5343.5537109375))
  elseif _G.SelectIsland == "Hydra Island" then
    Tween(CFrame.new(5228.8842773438, 604.23400878906, 345.0400390625))
  elseif _G.SelectIsland == "Floating Turtle" then
    Tween(CFrame.new(-13274.528320313, 531.82073974609, -7579.22265625))
  elseif _G.SelectIsland == "Mansion" then
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("requestEntrance",Vector3.new(-12471.169921875, 374.94024658203, -7551.677734375))
  elseif _G.SelectIsland == "Haunted Castle" then
    Tween(CFrame.new(-9515.3720703125, 164.00624084473, 5786.0610351562))
  elseif _G.SelectIsland == "Ice Cream Island" then
    Tween(CFrame.new(-902.56817626953, 79.93204498291, -10988.84765625))
  elseif _G.SelectIsland == "Peanut Island" then
    Tween(CFrame.new(-2062.7475585938, 50.473892211914, -10232.568359375))
  elseif _G.SelectIsland == "Cake Island" then
    Tween(CFrame.new(-1884.7747802734375, 19.327526092529297, -11666.8974609375))
  elseif _G.SelectIsland == "Snow Island" then
  Tween(CFrame.new(231.742981, 25.3354111, -12199.0537, 0.998278677, -5.16006757e-08, 0.0586484075, 4.79685092e-08, 1, 6.33390442e-08, -0.0586484075, -6.04167383e-08, 0.998278677))
  end
  until not _G.TeleportIsland
  end
  CancelTween(_G.TeleportIsland)
 end)




 ------------------Raid

 Chips = {"Flame","Ice","Quake","Light","Dark","Spider","Rumble","Magma","Buddha","Sand","Phoenix","Dough"}

 Raid:Dropdown('Chọn Raid',Chips, function(selchipf)
     SelectChip = selchipf
 end)




Raid:Button("Mua Chip",function()
     game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("RaidsNpc","Select",SelectChip)
  	end)



    Raid:Button("Vào Raid",function()
      if Second_Sea then
        fireclickdetector(Workspace.Map.CircleIsland.RaidSummon2.Button.Main.ClickDetector)
    elseif Third_Sea then
        fireclickdetector(Workspace.Map["Boat Castle"].RaidSummon2.Button.Main.ClickDetector)
    end
    end)


Raid:Toggle("Giết quái",KillAura,function(Value)
  KillAura = Value
end)


spawn(function()
    while wait() do
        if KillAura then
            pcall(function()
                for i,v in pairs(game.Workspace.Enemies:GetDescendants()) do
                    if v:FindFirstChild("Humanoid") and v:FindFirstChild("HumanoidRootPart") and v.Humanoid.Health > 0 then
                        repeat task.wait()
                            sethiddenproperty(game:GetService('Players').LocalPlayer,"SimulationRadius",math.huge)
                            v.Humanoid.Health = 0
                            v.HumanoidRootPart.CanCollide = false
                        until not AutoDungeon or not v.Parent or v.Humanoid.Health <= 0
                    end
                end
            end)
        end
    end
end)


Raid:Toggle("Tự Động Qua Đảo",AutoNextIsland,function(Value)
  AutoNextIsland = Value
  CancelTween(AutoNextIsland)
end)


spawn(function()
    while task.wait() do
        if AutoNextIsland then
            pcall(function()
                if game:GetService("Players")["LocalPlayer"].PlayerGui.Main.Timer.Visible == true then
                    if game:GetService("Workspace")["_WorldOrigin"].Locations:FindFirstChild("Island 5") then
                        Tween(game:GetService("Workspace")["_WorldOrigin"].Locations:FindFirstChild("Island 5").CFrame * CFrame.new(0,70,100))
                    elseif game:GetService("Workspace")["_WorldOrigin"].Locations:FindFirstChild("Island 4") then
                        Tween(game:GetService("Workspace")["_WorldOrigin"].Locations:FindFirstChild("Island 4").CFrame * CFrame.new(0,70,100))
                    elseif game:GetService("Workspace")["_WorldOrigin"].Locations:FindFirstChild("Island 3") then
                        Tween(game:GetService("Workspace")["_WorldOrigin"].Locations:FindFirstChild("Island 3").CFrame * CFrame.new(0,70,100))
                    elseif game:GetService("Workspace")["_WorldOrigin"].Locations:FindFirstChild("Island 2") then
                        Tween(game:GetService("Workspace")["_WorldOrigin"].Locations:FindFirstChild("Island 2").CFrame * CFrame.new(0,70,100))
                    elseif game:GetService("Workspace")["_WorldOrigin"].Locations:FindFirstChild("Island 1") then
                        Tween(game:GetService("Workspace")["_WorldOrigin"].Locations:FindFirstChild("Island 1").CFrame * CFrame.new(0,70,100))
                    end
                end
            end)
        end
    end
end)

Raid:Toggle("Tự Động Nâng v2",AutoAwakenAbilities,function(Value)
  AutoAwakenAbilities = Value
end)

spawn(function()
    while task.wait() do
        if AutoAwakenAbilities then
            pcall(function()
                game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("Awakener","Awaken")
            end)
        end
    end
end)

-----esp

Raid:Label("Esp")

	function isnil(thing)
		return (thing == nil)
	end
	local function round(n)
		return math.floor(tonumber(n) + 0.5)
	end
	Number = math.random(1, 1000000)
	function UpdatePlayerChams()
		for i,v in pairs(game:GetService'Players':GetChildren()) do
			pcall(function()
				if not isnil(v.Character) then
					if ESPPlayer then
						if not isnil(v.Character.Head) and not v.Character.Head:FindFirstChild('NameEsp'..Number) then
							local bill = Instance.new('BillboardGui',v.Character.Head)
							bill.Name = 'NameEsp'..Number
							bill.ExtentsOffset = Vector3.new(0, 1, 0)
							bill.Size = UDim2.new(1,200,1,30)
							bill.Adornee = v.Character.Head
							bill.AlwaysOnTop = true
							local name = Instance.new('TextLabel',bill)
							name.Font = "GothamBold"
							name.FontSize = "Size14"
							name.TextWrapped = true
							name.Text = (v.Name ..' \n'.. round((game:GetService('Players').LocalPlayer.Character.Head.Position - v.Character.Head.Position).Magnitude/3) ..' M')
							name.Size = UDim2.new(1,0,1,0)
							name.TextYAlignment = 'Top'
							name.BackgroundTransparency = 1
							name.TextStrokeTransparency = 0.5
							if v.Team == game.Players.LocalPlayer.Team then
								name.TextColor3 = Color3.new(0,255,0)
							else
								name.TextColor3 = Color3.new(255,0,0)
							end
						else
							v.Character.Head['NameEsp'..Number].TextLabel.Text = (v.Name ..'   \n'.. round((game:GetService('Players').LocalPlayer.Character.Head.Position - v.Character.Head.Position).Magnitude/3) ..' M')
						end
					else
						if v.Character.Head:FindFirstChild('NameEsp'..Number) then
							v.Character.Head:FindFirstChild('NameEsp'..Number):Destroy()
						end
					end
				end
			end)
		end
	end
	function UpdateChestChams() 
		for i,v in pairs(game.Workspace:GetChildren()) do
			pcall(function()
				if string.find(v.Name,"Chest") then
					if ChestESP then
						if string.find(v.Name,"Chest") then
							if not v:FindFirstChild('NameEsp'..Number) then
								local bill = Instance.new('BillboardGui',v)
								bill.Name = 'NameEsp'..Number
								bill.ExtentsOffset = Vector3.new(0, 1, 0)
								bill.Size = UDim2.new(1,200,1,30)
								bill.Adornee = v
								bill.AlwaysOnTop = true
								local name = Instance.new('TextLabel',bill)
								name.Font = "GothamBold"
								name.FontSize = "Size14"
								name.TextWrapped = true
								name.Size = UDim2.new(1,0,1,0)
								name.TextYAlignment = 'Top'
								name.BackgroundTransparency = 1
								name.TextStrokeTransparency = 0.5
								if v.Name == "Chest1" then
									name.TextColor3 = Color3.fromRGB(10, 224, 153)
									name.Text = ("Chest 1" ..' \n'.. round((game:GetService('Players').LocalPlayer.Character.Head.Position - v.Position).Magnitude/3) ..' M')
								end
								if v.Name == "Chest2" then
									name.TextColor3 = Color3.fromRGB(10, 224, 153)
									name.Text = ("Chest 2" ..' \n'.. round((game:GetService('Players').LocalPlayer.Character.Head.Position - v.Position).Magnitude/3) ..' M')
								end
								if v.Name == "Chest3" then
									name.TextColor3 = Color3.fromRGB(10, 224, 153)
									name.Text = ("Chest 3" ..' \n'.. round((game:GetService('Players').LocalPlayer.Character.Head.Position - v.Position).Magnitude/3) ..' M')
								end
							else
								v['NameEsp'..Number].TextLabel.Text = (v.Name ..'   \n'.. round((game:GetService('Players').LocalPlayer.Character.Head.Position - v.Position).Magnitude/3) ..' M')
							end
						end
					else
						if v:FindFirstChild('NameEsp'..Number) then
							v:FindFirstChild('NameEsp'..Number):Destroy()
						end
					end
				end
			end)
		end
	end
	function UpdateDevilChams() 
		for i,v in pairs(game.Workspace:GetChildren()) do
			pcall(function()
				if DevilFruitESP then
					if string.find(v.Name, "Fruit") then   
						if not v.Handle:FindFirstChild('NameEsp'..Number) then
							local bill = Instance.new('BillboardGui',v.Handle)
							bill.Name = 'NameEsp'..Number
							bill.ExtentsOffset = Vector3.new(0, 1, 0)
							bill.Size = UDim2.new(1,200,1,30)
							bill.Adornee = v.Handle
							bill.AlwaysOnTop = true
							local name = Instance.new('TextLabel',bill)
							name.Font = "GothamBold"
							name.FontSize = "Size14"
							name.TextWrapped = true
							name.Size = UDim2.new(1,0,1,0)
							name.TextYAlignment = 'Top'
							name.BackgroundTransparency = 1
							name.TextStrokeTransparency = 0.5
							name.TextColor3 = Color3.fromRGB(10, 224, 153)
							name.Text = (v.Name ..' \n'.. round((game:GetService('Players').LocalPlayer.Character.Head.Position - v.Handle.Position).Magnitude/3) ..' M')
						else
							v.Handle['NameEsp'..Number].TextLabel.Text = (v.Name ..'   \n'.. round((game:GetService('Players').LocalPlayer.Character.Head.Position - v.Handle.Position).Magnitude/3) ..' M')
						end
					end
				else
					if v.Handle:FindFirstChild('NameEsp'..Number) then
						v.Handle:FindFirstChild('NameEsp'..Number):Destroy()
					end
				end
			end)
		end
	end
	function UpdateFlowerChams() 
		for i,v in pairs(game.Workspace:GetChildren()) do
			pcall(function()
				if v.Name == "Flower2" or v.Name == "Flower1" then
					if FlowerESP then 
						if not v:FindFirstChild('NameEsp'..Number) then
							local bill = Instance.new('BillboardGui',v)
							bill.Name = 'NameEsp'..Number
							bill.ExtentsOffset = Vector3.new(0, 1, 0)
							bill.Size = UDim2.new(1,200,1,30)
							bill.Adornee = v
							bill.AlwaysOnTop = true
							local name = Instance.new('TextLabel',bill)
							name.Font = "GothamBold"
							name.FontSize = "Size14"
							name.TextWrapped = true
							name.Size = UDim2.new(1,0,1,0)
							name.TextYAlignment = 'Top'
							name.BackgroundTransparency = 1
							name.TextStrokeTransparency = 0.5
							name.TextColor3 = Color3.fromRGB(10, 224, 153)
							if v.Name == "Flower1" then 
								name.Text = ("Blue Flower" ..' \n'.. round((game:GetService('Players').LocalPlayer.Character.Head.Position - v.Position).Magnitude/3) ..' M')
								name.TextColor3 = Color3.fromRGB(10, 224, 153)
							end
							if v.Name == "Flower2" then
								name.Text = ("Red Flower" ..' \n'.. round((game:GetService('Players').LocalPlayer.Character.Head.Position - v.Position).Magnitude/3) ..' M')
								name.TextColor3 = Color3.fromRGB(10, 224, 153)
							end
						else
							v['NameEsp'..Number].TextLabel.Text = (v.Name ..'   \n'.. round((game:GetService('Players').LocalPlayer.Character.Head.Position - v.Position).Magnitude/3) ..' M')
						end
					else
						if v:FindFirstChild('NameEsp'..Number) then
							v:FindFirstChild('NameEsp'..Number):Destroy()
						end
					end
				end   
			end)
		end
	end
	Raid:Toggle("ESP Người",false,function(a)
		ESPPlayer = a
		while ESPPlayer do wait()
			UpdatePlayerChams()
		end
	end)
	Raid:Toggle("ESP Rương",false,function(a)
		ChestESP = a
		while ChestESP do wait()
			UpdateChestChams() 
		end
	end)
	Raid:Toggle("ESP Trái",false,function(a)
		DevilFruitESP = a
		while DevilFruitESP do wait()
			UpdateDevilChams() 
		end
	end)
	Raid:Toggle("ESP Hoa (Sea2)",false,function(a)
		FlowerESP = a
		while FlowerESP do wait()
			UpdateFlowerChams() 
		end
	end)


----------------Race
MysList = {
	"Đến Đền",
	"Cổng Thỏ",
	"Cổng Người Máy",
	"Cổng Người Cá",
	"Cổng Người",
	"Cổng Quỷ",
	"Cổng Thiên Thần",
	"Người bán bánh răng"
}	
Race:Dropdown("Chọn Cổng",MysList,function(v)
	_G.MysChoose = v
end)
Race:Toggle("Tween",false,function(value)
_G.Start_Tween_Mys = value    
if _G.Start_Tween_Mys == true then
	repeat wait()
		if _G.MysChoose == "Đến Đền" then
			game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = CFrame.new(28286.35546875, 14896.8505859375, 102.62469482421875)
		elseif _G.MysChoose == "Cổng Thỏ" then
      Tween(CFrame.new(29012.341796875, 14890.9755859375, -380.1492614746094))
		elseif _G.MysChoose == "Cổng Người Máy" then
			Tween(CFrame.new(28502.681640625, 14895.9755859375, -423.7279357910156))
		elseif _G.MysChoose == "Cổng Người Cá" then
      Tween(CFrame.new(28231.17578125, 14890.9755859375, -211.64173889160156))
		elseif _G.MysChoose == "Cổng Người" then
			Tween(CFrame.new(29221.822265625, 14890.9755859375, -205.99114990234375))
		elseif _G.MysChoose == "Cổng Quỷ" then
			Tween(CFrame.new(28674.244140625, 14890.6767578125, 445.4310607910156))
		elseif _G.MysChoose == "Cổng Thiên Thần" then
			Tween(CFrame.new(28960.158203125, 14919.6240234375, 235.03948974609375))
		elseif _G.MysChoose == "Người bán bánh răng" then
			Tween(CFrame.new(28975.416015625, 14889.9755859375, -119.18738555908203))
		end
	until not _G.Start_Tween_Mys
end
CancelTween(_G.Start_Tween_Mys)
end)

------complete trial

Race:Label("Complete Trial")

Race:Button("Hoàn thành ải thiên thần",function(t)
  game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = game.Workspace.Map.SkyTrial.Model.FinishPart.CFrame
  end)

  Race:Button("Hoàn thành ải thỏ",function(t)
  game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = game:GetService("Workspace").Map.MinkTrial.Ceiling.CFrame * CFrame.new(0,-5,0)
  end)

  Race:Button("Hoàn thành ải người máy",function(t)
  game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame * CFrame.new(0,300,0)
  end)

Race:Toggle("Kill Người Chơi Trong Ải",false,function(v)
    _G.KillAfterTrials = v
end)
spawn(function()
    while wait() do 
        pcall(function()
            if _G.KillAfterTrials then
                for i,v in pairs(game:GetService("Workspace").Characters:GetChildren()) do
                    if v.Name ~= game.Players.LocalPlayer.Name and (v.HumanoidRootPart.Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude <= 100 then
                        if v.Humanoid.Health > 0 then
                            repeat wait()
                                AutoHaki()
                                EquipTool(SelectWeapon)
                                NameTarget = v.Name
                                TP2(v.HumanoidRootPart.CFrame * CFrame.new(0,0,5))
                                v.HumanoidRootPart.CanCollide = false
                                v.Head.CanCollide = false
                                v.HumanoidRootPart.Size = Vector3.new(60, 60, 60)
                                Click()
                            until not _G.KillAfterTrials or not v.Parent or v.Humanoid.Health <= 0 
                        end
                    end
                end
            end
        end)
    end
end)
--------mirage Island

Race:Label("Mirage Island")
function EquipAllWeapon()
	pcall(function()
		for i,v in pairs(game.Players.LocalPlayer.Backpack:GetChildren()) do
			if v:IsA('Tool') and not (v.Name == "Summon Sea Beast" or v.Name == "Water Body" or v.Name == "Awakening") then
				local ToolHumanoid = game.Players.LocalPlayer.Backpack:FindFirstChild(v.Name) 
				game.Players.LocalPlayer.Character.Humanoid:EquipTool(ToolHumanoid) 
                wait(1)
			end
		end
	end)
end
function TPB(CFgo)
	local tween_s = game:service"TweenService"
	local info = TweenInfo.new((game:GetService("Workspace").Boats.MarineBrigade.VehicleSeat.CFrame.Position - CFgo.Position).Magnitude/300, Enum.EasingStyle.Linear)
	tween = tween_s:Create(game:GetService("Workspace").Boats.MarineBrigade.VehicleSeat, info, {CFrame = CFgo})
	tween:Play()

	local tweenfunc = {}

	function tweenfunc:Stop()
		tween:Cancel()
	end

	return tweenfunc
end

function TPP(CFgo)
	if game.Players.LocalPlayer.Character:WaitForChild("Humanoid").Health <= 0 or not game:GetService("Players").LocalPlayer.Character:WaitForChild("Humanoid") then tween:Cancel() repeat wait() until game:GetService("Players").LocalPlayer.Character:WaitForChild("Humanoid") and game:GetService("Players").LocalPlayer.Character:WaitForChild("Humanoid").Health > 0 wait(7) return end
	local tween_s = game:service"TweenService"
	local info = TweenInfo.new((game:GetService("Players")["LocalPlayer"].Character.HumanoidRootPart.Position - CFgo.Position).Magnitude/325, Enum.EasingStyle.Linear)
	tween = tween_s:Create(game.Players.LocalPlayer.Character["HumanoidRootPart"], info, {CFrame = CFgo})
	tween:Play()

	local tweenfunc = {}

	function tweenfunc:Stop()
		tween:Cancel()
	end

	return tweenfunc
end
Race:Toggle("Đánh Thuỷ Quái",_G.Auto_Seabest,function(value)
  _G.Auto_Seabest = value
  CancelTween(_G.Auto_Seabest)
  end)
  
  local gg = getrawmetatable(game)
  local old = gg.__namecall
  setreadonly(gg,false)
  gg.__namecall = newcclosure(function(...)
    local method = getnamecallmethod()
    local args = {...}
    if tostring(method) == "FireServer" then
      if tostring(args[1]) == "RemoteEvent" then
        if tostring(args[2]) ~= "true" and tostring(args[2]) ~= "false" then
          if Skillaimbot then
            args[2] = AimBotSkillPosition
            return old(unpack(args))
          end
        end
      end
    end
    return old(...)
  end)
  
  
  Skillz = true
  Skillx = true
  Skillc = true
  Skillv = true
  
  spawn(function()
      while wait() do
          pcall(function()
              if AutoSkill then
                  if Skillz then
                      game:service('VirtualInputManager'):SendKeyEvent(true, "Z", false, game)
                      wait(.1)
                      game:service('VirtualInputManager'):SendKeyEvent(false, "Z", false, game)
                  end
                  if Skillx then
                      game:service('VirtualInputManager'):SendKeyEvent(true, "X", false, game)
                      wait(.1)
                      game:service('VirtualInputManager'):SendKeyEvent(false, "X", false, game)
                  end
                  if Skillc then
                      game:service('VirtualInputManager'):SendKeyEvent(true, "C", false, game)
                      wait(.1)
                      game:service('VirtualInputManager'):SendKeyEvent(false, "C", false, game)
                  end
                  if Skillv then
                      game:service('VirtualInputManager'):SendKeyEvent(true, "V", false, game)
                      wait(.1)
                      game:service('VirtualInputManager'):SendKeyEvent(false, "V", false, game)
                  end
              end
          end)
      end
  end)
  
  task.spawn(function()
      while wait() do
          pcall(function()
              if _G.Auto_Seabest then
                  if not game:GetService("Workspace").SeaBeasts:FindFirstChild("SeaBeast1") then
                      if not game:GetService("Workspace").Enemies:FindFirstChild("PirateBrigade") then 
                          if not game:GetService("Workspace").Enemies:FindFirstChild("PirateBasic") then
                              if not game:GetService("Workspace").Boats:FindFirstChild("MarineBrigade") then
                                  buyb = Tween(CFrame.new(-11.78054428100586, 10.302456855773926, 2927.2255859375))
                                  if (CFrame.new(-11.78054428100586, 10.302456855773926, 2927.2255859375).Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).magnitude <= 10 then
                                      if buyb then buyb:Stop() end
                                      local args = {
                                          [1] = "",
                                          [2] = ""
                                      }
          
                                      game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer(unpack(args))
                                  end
                              elseif game:GetService("Workspace").Boats:FindFirstChild("PirateBrigade") then
                                  if game.Players.LocalPlayer.Character:WaitForChild("Humanoid").Sit == false then
                                      two(game:GetService("Workspace").Boats.MarineBrigade.VehicleSeat.CFrame * CFrame.new(0,1,0))
                                  elseif game.Players.LocalPlayer.Character:WaitForChild("Humanoid").Sit == true then
                                      repeat wait()
                                          if (game:GetService("Workspace").Boats.PirateBrigade.VehicleSeat.CFrame.Position - game.Players.LocalPlayer.Character.HumanoidRootPart.Position).magnitude <= 10 then
                                              two(CFrame.new(35.04552459716797, 17.750778198242188, 4819.267578125))
                                          end
                                      until game:GetService("Workspace").SeaBeasts:FindFirstChild("SeaBeast1") or _G.Auto_Seabest == false
                                  end
                              end
                          elseif game:GetService("Workspace").Enemies:FindFirstChild("PirateBrigade") then
                              for is,vs in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
                                  if vs.Name == "PirateBrigade" then
                                      if v:FindFirstChild("VehicleSeat") then
                                          repeat wait()
                                              game.Players.LocalPlayer.Character:WaitForChild("Humanoid").Sit = false
                                              two(vs.VehicleSeat.CFrame * CFrame.new(0,30,0))
                                              EquipAllWeapon()  
                                              AutoSkill = true
                                              AimBotSkillPosition = vs.VehicleSeat
                                              Skillaimbot = true
                                          until not game:GetService("Workspace").Enemies:FindFirstChild("PirateBrigade") or _G.Auto_Seabest == false
                                          AutoSkill = false
                                          Skillaimbot = false
                                      end
                                  end
                              end
                          end
                      elseif game:GetService("Workspace").Enemies:FindFirstChild("PirateBrigade") then
                          for iss,vss in pairs(game:GetService("Workspace").Enemies:GetChildren()) do
                              if vss.Name == "PirateBrigade" then
                                  if v:FindFirstChild("VehicleSeat") then
                                      repeat wait()
                                          game.Players.LocalPlayer.Character:WaitForChild("Humanoid").Sit = false
                                          two(vss.VehicleSeat.CFrame * CFrame.new(0,30,0))
                                          EquipAllWeapon()  
                                          AutoSkill = true
                                          AimBotSkillPosition = vss.VehicleSeat
                                          Skillaimbot = true
                                      until not game:GetService("Workspace").Enemies:FindFirstChild("PirateBrigade") or _G.Auto_Seabest == false
                                      AutoSkill = false
                                      Skillaimbot = false
                                  end
                              end
                          end
                      end
                  elseif game:GetService("Workspace").SeaBeasts:FindFirstChild("SeaBeast1") then  
                      for i,v in pairs(game:GetService("Workspace").SeaBeasts:GetChildren()) do
                          if v:FindFirstChild("HumanoidRootPart") then
                              repeat wait()
                                  game.Players.LocalPlayer.Character:WaitForChild("Humanoid").Sit = false
                                  two(v.HumanoidRootPart.CFrame * CFrame.new(0,500,0))
                                  EquipAllWeapon()  
                                  AutoSkill = true
                                  AimBotSkillPosition = v.HumanoidRootPart
                                  Skillaimbot = true
                              until not v:FindFirstChild("HumanoidRootPart") or _G.Auto_Seabest == false
                              AutoSkill = false
                              Skillaimbot = false
                          end
                      end
                  end
              end
          end)
      end
  end)

  Race:Toggle("Tự Động Đến Đảo Kì Bí",_G.AutoMysticIsland,function(value)
    _G.AutoMysticIsland = value
    CancelTween(_G.AutoMysticIsland)
    end)
  
    spawn(function()
        pcall(function()
            while wait() do
                if _G.AutoMysticIsland then
                    if game:GetService("Workspace").Map:FindFirstChild("MysticIsland") then
                      Tween(CFrame.new(game:GetService("Workspace").Map.MysticIsland.Center.Position.X,500,game:GetService("Workspace").Map.MysticIsland.Center.Position.Z))
                    end
                end
            end
        end)
    end)
  


Race:Toggle("Đến Bánh Răng",_G.TweenMGear,function(value)
_G.TweenMGear = value
CancelTween(_G.TweenMGear)
end)

spawn(function()
pcall(function()
  while wait() do
      if _G.TweenMGear then
  if game:GetService("Workspace").Map:FindFirstChild("MysticIsland") then
    for i,v in pairs(game:GetService("Workspace").Map.MysticIsland:GetChildren()) do 
      if v:IsA("MeshPart")then 
                      if v.Material ==  Enum.Material.Neon then  
                        Tween(v.CFrame)
                      end
                  end
    end
  end
end
  end
end)
end)


-------------------Player

Playerslist = {}
    
    for i,v in pairs(game:GetService("Players"):GetChildren()) do
        table.insert(Playerslist,v.Name)
    end
    
    local SelectedPly = Pvp:Dropdown("Chọn Người",Playerslist,function(value)
        _G.SelectPly = value
    end)
    
    Pvp:Button("Làm mới",function()
        Playerslist = {}
        SelectedPly:Clear()
        for i,v in pairs(game:GetService("Players"):GetChildren()) do  
            SelectedPly:Add(v.Name)
        end
    end)
    
    Pvp:Toggle("Quan sát",false,function(value)
        SpectatePlys = value
        local plr1 = game:GetService("Players").LocalPlayer.Character.Humanoid
        local plr2 = game:GetService("Players"):FindFirstChild(_G.SelectPly)
        repeat wait(.1)
            game:GetService("Workspace").Camera.CameraSubject = game:GetService("Players"):FindFirstChild(_G.SelectPly).Character.Humanoid
        until SpectatePlys == false 
        game:GetService("Workspace").Camera.CameraSubject = game:GetService("Players").LocalPlayer.Character.Humanoid
    end)
    
   Pvp:Toggle("Bay đến",false,function(value)
        _G.TeleportPly = value
        pcall(function()
            if _G.TeleportPly then
                repeat Tween(game:GetService("Players")[_G.SelectPly].Character.HumanoidRootPart.CFrame) wait() until _G.TeleportPly == false
            end
            CancelTween(_G.TeleportPly)
        end)
    end)
	
	
	Pvp:Label("Aimbot ( Working 90% )")
	
        Pvp:Toggle("Tự Động Ngắm Kĩ Năng",false,function(value)
            _G.Aimbot_Skill_Fov = value
        end)
        local lp = game:GetService('Players').LocalPlayer
        local mouse = lp:GetMouse()
        spawn(function()
            while wait() do
                if _G.Aimbot_Skill_Fov then
                    pcall(function()
                        local MaxDist, Closest = math.huge
                        for i,v in pairs(game:GetService("Players"):GetChildren()) do 
                            local Head = v.Character:FindFirstChild("HumanoidRootPart")
                            local Pos, Vis = game.Workspace.CurrentCamera.WorldToScreenPoint(game.Workspace.CurrentCamera, Head.Position)
                            local MousePos, TheirPos = Vector2.new(mouse.X, mouse.Y), Vector2.new(Pos.X, Pos.Y)
                            local Dist = (TheirPos - MousePos).Magnitude
                            if Dist < MaxDist and Dist <= _G.Select_Size_Fov and v.Name ~= game.Players.LocalPlayer.Name then
                                MaxDist = Dist
                                _G.Aim_Players = v
                            end
                        end
                    end)
                end
            end
        end)
        spawn(function()
            local gg = getrawmetatable(game)
            local old = gg.__namecall
            setreadonly(gg,false)
            gg.__namecall = newcclosure(function(...)
                local method = getnamecallmethod()
                local args = {...}
                if tostring(method) == "FireServer" then
                    if tostring(args[1]) == "RemoteEvent" then
                        if tostring(args[2]) ~= "true" and tostring(args[2]) ~= "false" then
                            if _G.Aimbot_Skill_Fov then
                                args[2] = _G.Aim_Players.Character.HumanoidRootPart.Position
                                return old(unpack(args))
                            end
                        end
                    end
                end
                return old(...)
            end)
        end)
	
	Pvp:Label("Buff")
	
	
	
	Pvp:Toggle("Tự Động Tộc V3",false,function(v)
		_G.Rv3 = v    
	end)

	Pvp:Toggle("Tự Động Tộc V4",false,function(v)
		_G.Rv4 = v    
	end)
	

  local CameraShaker = require(game.ReplicatedStorage.Util.CameraShaker)
CombatFrameworkR = require(game:GetService("Players").LocalPlayer.PlayerScripts.CombatFramework)
y = debug.getupvalues(CombatFrameworkR)[2]
spawn(function()
    game:GetService("RunService").RenderStepped:Connect(function()
        if _G.FastAttack2 then
            if typeof(y) == "table" then
                pcall(function()
                    CameraShaker:Stop()
                    y.activeController.timeToNextAttack = (math.huge^math.huge^math.huge)
                    y.activeController.timeToNextAttack = 0
                    y.activeController.hitboxMagnitude = 100
                    y.activeController.active = false
                    y.activeController.timeToNextBlock = 0
                    y.activeController.focusStart = 0
                    y.activeController.increment = 4
                    y.activeController.blocking = false
                    y.activeController.attacking = false
                    y.activeController.humanoid.AutoRotate = true
                end)
            end
        end
    end)
end)





	spawn(function()
		while wait() do
			pcall(function()
				if _G.Rv3 then
					game:GetService("VirtualInputManager"):SendKeyEvent(true,"T",false,game)
					game:GetService("VirtualInputManager"):SendKeyEvent(false,"T",false,game)
				end
			end)
		end
	end)
	spawn(function()
		while wait() do
			pcall(function()
				if _G.Rv4 then
					game:GetService("VirtualInputManager"):SendKeyEvent(true,"Y",false,game)
					game:GetService("VirtualInputManager"):SendKeyEvent(false,"Y",false,game)
				end
			end)
		end
	end)

	

	Pvp:Toggle("Chạy Nhanh",true,function(v)
		_G.GsE = v    
	end)
	spawn(function()
		while wait() do
			pcall(function()
				if _G.GsE then
					game:GetService("Players").LocalPlayer.Character.Humanoid.WalkSpeed = 400
				end
			end)
		end
	end)
	
	
	Pvp:Toggle("Trên Nước",true,function(value)
    _G.WalkWater = value
end)

spawn(function()
        while task.wait() do
            pcall(function()
                if _G.WalkWater then
                    game:GetService("Workspace").Map["WaterBase-Plane"].Size = Vector3.new(1000,112,1000)
                else
                    game:GetService("Workspace").Map["WaterBase-Plane"].Size = Vector3.new(1000,80,1000)
                end
            end)
        end
    end)
	
	
-------------------------Shop

S:Button("Mua Black Leg",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyBlackLeg")
end)
S:Button("Mua Electro",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyElectro")
end)
S:Button("Mua Fishman Karate",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyFishmanKarate")
end)
S:Button("Mua DragonClaw",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BlackbeardReward","DragonClaw","1")
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BlackbeardReward","DragonClaw","2")
end)
S:Button("Mua SuperHuman",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuySuperhuman")
end)
S:Button("Mua Death Step",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyDeathStep")
end)
S:Button("Mua Sharkman Karate",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuySharkmanKarate",true)
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuySharkmanKarate")
end)
S:Button("Mua Electric Claw",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyElectricClaw")
end)
S:Button("Mua Dragon Talon",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyDragonTalon")
end)
S:Button("Mua God Human",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyGodhuman")
end)
S:Button("Mua Geppo",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyHaki","Geppo")
end)
S:Button("Mua Buso Haki",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyHaki","Buso")
end)
S:Button("Mua Soru",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyHaki","Soru")
end)
S:Button("Mua Ken Haki",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("KenTalk","Buy")
end)
S:Button("Random Fruit",function()
local args = {
  [1] = "Cousin",
  [2] = "Buy"
}
game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer(unpack(args))
end)
S:Button("Mua Cutlass",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyItem","Cutlass")
end)
S:Button("Mua Iron Mace",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyItem","Iron Mace")
end)
S:Button("Mua Duel Katana",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyItem","Duel Katana")
end)
S:Button("Mua Katana",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyItem","Katana")
end)
S:Button("Mua Triple Katana",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyItem","Triple Katana")
end)
S:Button("Mua Dual-Headed Blade",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyItem","Dual-Headed Blade")
end)
S:Button("Mua Bisento",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyItem","Bisento")
end)
S:Button("Mua Soul Cane",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyItem","Soul Cane")
end)
S:Button("Mua Kabucha",function()
game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BlackbeardReward","Slingshot","1")
game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BlackbeardReward","Slingshot","2")
end)
S:Button("Mua Flintlock",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyItem","Flintlock")
end)
S:Button("Mua Refined Flintlock",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyItem","Refined Flintlock")
end)
S:Button("Mua Musket",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyItem","Musket")
end)
S:Button("Mua Slingshot",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyItem","Slingshot")
end)
S:Button("Mua Cannon",function()
  game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("BuyItem","Cannon")
end)


function Hop()
    local PlaceID = game.PlaceId
    local AllIDs = {}
    local foundAnything = ""
    local actualHour = os.date("!*t").hour
    local Deleted = false
    function TPReturner()
        local Site;
        if foundAnything == "" then
            Site = game.HttpService:JSONDecode(game:HttpGet('https://games.roblox.com/v1/games/' .. PlaceID .. '/servers/Public?sortOrder=Asc&limit=100'))
        else
            Site = game.HttpService:JSONDecode(game:HttpGet('https://games.roblox.com/v1/games/' .. PlaceID .. '/servers/Public?sortOrder=Asc&limit=100&cursor=' .. foundAnything))
        end
        local ID = ""
        if Site.nextPageCursor and Site.nextPageCursor ~= "null" and Site.nextPageCursor ~= nil then
            foundAnything = Site.nextPageCursor
        end
        local num = 0;
        for i,v in pairs(Site.data) do
            local Possible = true
            ID = tostring(v.id)
            if tonumber(v.maxPlayers) > tonumber(v.playing) then
                for _,Existing in pairs(AllIDs) do
                    if num ~= 0 then
                        if ID == tostring(Existing) then
                            Possible = false
                        end
                    else
                        if tonumber(actualHour) ~= tonumber(Existing) then
                            local delFile = pcall(function()
                                AllIDs = {}
                                table.insert(AllIDs, actualHour)
                            end)
                        end
                    end
                    num = num + 1
                end
                if Possible == true then
                    table.insert(AllIDs, ID)
                    wait()
                    pcall(function()
                        wait()
                        game:GetService("TeleportService"):TeleportToPlaceInstance(PlaceID, ID, game.Players.LocalPlayer)
                    end)
                    wait(4)
                end
            end
        end
    end
end




------------------------misc

Misc:Label("Server")

Misc:Button("Vào lại Máy chủ",function()
    game:GetService("TeleportService"):Teleport(game.PlaceId, game:GetService("Players").LocalPlayer)
end)

Misc:Button("Đổi máy chủ",function()
    Hop()
end)

Misc:Button("Vào máy chủ ít người",function()
    getgenv().AutoTeleport = true
    getgenv().DontTeleportTheSameNumber = true 
    getgenv().CopytoClipboard = false
    if not game:IsLoaded() then
        print("Game is loading waiting...")
    end
    local maxplayers = math.huge
    local serversmaxplayer;
    local goodserver;
    local gamelink = "https://games.roblox.com/v1/games/" .. game.PlaceId .. "/servers/Public?sortOrder=Asc&limit=100" 
    function serversearch()
        for _, v in pairs(game:GetService("HttpService"):JSONDecode(game:HttpGetAsync(gamelink)).data) do
            if type(v) == "table" and v.playing ~= nil and maxplayers > v.playing then
                serversmaxplayer = v.maxPlayers
                maxplayers = v.playing
                goodserver = v.id
            end
        end       
    end
    function getservers()
        serversearch()
        for i,v in pairs(game:GetService("HttpService"):JSONDecode(game:HttpGetAsync(gamelink))) do
            if i == "nextPageCursor" then
                if gamelink:find("&cursor=") then
                    local a = gamelink:find("&cursor=")
                    local b = gamelink:sub(a)
                    gamelink = gamelink:gsub(b, "")
                end
                gamelink = gamelink .. "&cursor=" ..v
                getservers()
            end
        end
    end 
    getservers()
    if AutoTeleport then
        if DontTeleportTheSameNumber then 
            if #game:GetService("Players"):GetPlayers() - 4  == maxplayers then
                return warn("It has same number of players (except you)")
            elseif goodserver == game.JobId then
                return warn("Your current server is the most empty server atm") 
            end
        end
        game:GetService("TeleportService"):TeleportToPlaceInstance(game.PlaceId, goodserver)
    end
end)

Misc:Button("Sao chép id Máy chủ",function()
setclipboard(tostring(game.JobId))
end)

Misc:Textbox("Dán Id Máy chủ cần vào", true, function(value)
_G.Job = value
end)

Misc:Button("Vào máy chủ",function()
game:GetService("TeleportService"):TeleportToPlaceInstance(game.placeId,_G.Job, game.Players.LocalPlayer)
end)



Misc:Label("Misc")
    
Misc:Button("Mở cửa hàng trái",function()
    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("GetFruits")
    game:GetService("Players").LocalPlayer.PlayerGui.Main.FruitShop.Visible = true
end)

Misc:Button("Mở Danh hiệu",function()
local args = {
    [1] = "getTitles"
}
game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer(unpack(args))
game.Players.localPlayer.PlayerGui.Main.Titles.Visible = true
end)

Misc:Button("Mở Kho Màu Haki",function()
game.Players.localPlayer.PlayerGui.Main.Colors.Visible = true
end)
  
Misc:Label("Teams")

Misc:Button("Vào Pirates Team",function()
    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("SetTeam","Pirates") 
end)

Misc:Button("Vào Marines Team",function()
    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("SetTeam","Marines") 
end)



    Misc:Label("⚙️ Misc ⚙️")

Misc:Toggle("Không Văng", true, function()
local vu = game:GetService("VirtualUser")
repeat wait() until game:IsLoaded() 
	game:GetService("Players").LocalPlayer.Idled:connect(function()
    game:GetService("VirtualUser"):ClickButton2(Vector2.new())
		vu:Button2Down(Vector2.new(0,0),workspace.CurrentCamera.CFrame)
		wait(1)
		vu:Button2Up(Vector2.new(0,0),workspace.CurrentCamera.CFrame)
   end)
end)

	Misc:Toggle("Tự Động tham gia lại",true,function(value)
		_G.AutoRejoin = value
	end)

	spawn(function()
	    while wait() do
	        if _G.AutoRejoin then
	                getgenv().rejoin = game:GetService("CoreGui").RobloxPromptGui.promptOverlay.ChildAdded:Connect(function(child)
                        if child.Name == 'ErrorPrompt' and child:FindFirstChild('MessageArea') and child.MessageArea:FindFirstChild("ErrorFrame") then
                            game:GetService("TeleportService"):Teleport(game.PlaceId)
                        end
                     end)
	            end
	        end
	    end)

	
    Misc:Label("Hack")
    Misc:Button("Bẻ khoá Buso",function()
    
    -- Ability [
--     Buso,Soru,Geppo,KenUpgrade
-- ]
--Example
local Ability = "Buso" -- Ability Name
-- or
-- local Ability = {Buso,Soru,Geppo}
if type(Ability) == 'Spider' then
   game:GetService("CollectionService"):AddTag(game.Players.LocalPlayer.Character,Ability)
elseif type(Ability) == 'table' then
   for i,v in next , Ability do
       game:GetService("CollectionService"):AddTag(game.Players.LocalPlayer.Character,v)
   end
   end
   end)
   
   Misc:Button("Bẻ khoá Soru",function()
   -- Ability [
--     Buso,Soru,Geppo-- ]
--Example
local Ability = "Soru" -- Ability Name
-- or
-- local Ability = {Buso,Soru,Geppo}
if type(Ability) == 'Spider' then
   game:GetService("CollectionService"):AddTag(game.Players.LocalPlayer.Character,Ability)
elseif type(Ability) == 'table' then
   for i,v in next , Ability do
       game:GetService("CollectionService"):AddTag(game.Players.LocalPlayer.Character,v)
   end
   end
   end)
   
   Misc:Button("Bẻ khoá Geppo",function()
-- Ability [
--     Buso,Soru,Geppo-- ]
--Example
local Ability = "Geppo" -- Ability Name
-- or
-- local Ability = {Buso,Soru,Geppo}
if type(Ability) == 'Spider' then
   game:GetService("CollectionService"):AddTag(game.Players.LocalPlayer.Character,Ability)
elseif type(Ability) == 'table' then
   for i,v in next , Ability do
       game:GetService("CollectionService"):AddTag(game.Players.LocalPlayer.Character,v)
   end
   end
   end)



   

				   
				   
------------------------------FRUIT
				   Fruit:Toggle("Tự Động Đổi Trái",_G.Random_Auto,function(value)
        _G.Random_Auto = value
    end)
    
    spawn(function()
        pcall(function()
            while wait(.1) do
                if _G.Random_Auto then
                    game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("Cousin","Buy")
                end 
            end
        end)
    end)



    Fruit:Toggle("Tự Động Cất Trái",_G.AutoStoreFruit,function(value)
        _G.AutoStoreFruit = value
    end)

spawn(function()
    while task.wait() do
        if _G.AutoStoreFruit then
            pcall(function()
                if _G.AutoStoreFruit then
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Bomb Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Bomb Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Bomb-Bomb",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Bomb Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Spike Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Spike Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Spike-Spike",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Spike Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Chop Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Chop Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Chop-Chop",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Chop Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Spring Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Spring Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Spring-Spring",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Spring Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Rocket Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Rocket Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Rocket-Rocket",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Rocket Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Smoke Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Smoke Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Smoke-Smoke",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Smoke Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Spin Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Spin Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Spin-Spin",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Spin Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Flame Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Flame Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Flame-Flame",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Flame Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Falcon Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Falcon Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Falcon",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Falcon Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Ice Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Ice Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Ice-Ice",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Ice Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Sand Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Sand Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Sand-Sand",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Sand Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Dark Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Dark Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Dark-Dark",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Dark Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Revive Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Revive Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Revive-Revive",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Revive Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Diamond Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Diamond Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Diamond-Diamond",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Diamond Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Light Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Light Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Light-Light",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Light Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Love Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Love Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Love-Love",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Love Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Rubber Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Rubber Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Rubber-Rubber",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Rubber Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Barrier Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Barrier Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Barrier-Barrier",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Barrier Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Magma Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Magma Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Magma-Magma",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Magma Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Portal Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Portal Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Portal-Portal",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Portal Fruit"))
                    end
                end
                if not trygettrevo then
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Quake Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Quake Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Quake-Quake",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Quake Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Buddha Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Buddha Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Buddha",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Buddha Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Spider Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Spider Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Spider-Spider",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Spider Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Phoenix Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Phoenix Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Phoenix",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Phoenix Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Rumble Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Rumble Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Rumble-Rumble",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Rumble Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Pain Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Pain Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Pain-Pain",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Pain Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Gravity Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Gravity Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Gravity-Gravity",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Gravity Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Dough Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Dough Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Dough-Dough",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Dough Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Shadow Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Shadow Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Shadow-Shadow",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Shadow Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Venom Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Venom Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Venom-Venom",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Venom Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Control Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Control Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Control-Control",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Control Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Spirit Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Soul Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Soul-Soul",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Spirit Fruit"))
                    end
                    if game:GetService("Players").LocalPlayer.Character:FindFirstChild("Dragon Fruit") or game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Dragon Fruit") then
                        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("StoreFruit","Dragon-Dragon",game:GetService("Players").LocalPlayer.Backpack:FindFirstChild("Dragon Fruit"))
                    end
                end
            end)
        end
        wait(1)
    end
    end)


 Fruit:Toggle("Tp Đến Trái",false,function(value)
 _G.Grabfruit = value
end)

spawn(function()
			while wait(.1) do
				if _G.Grabfruit then
					for i,v in pairs(game.Workspace:GetChildren()) do
						if string.find(v.Name, "Fruit") then
							game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame = v.Handle.CFrame
						end
					end
				end
end
end)
 Fruit:Button("Cửa hàng trái",function()
	        game:GetService("ReplicatedStorage").Remotes.CommF_:InvokeServer("GetFruits")
	        game:GetService("Players").LocalPlayer.PlayerGui.Main.FruitShop.Visible = true
	    end)
--------------------------------------------------------------------------------------------------------------------------------------------
--fast attack
function click()
    game:GetService'VirtualUser':CaptureController()
    game:GetService'VirtualUser':Button1Down(Vector2.new(1280, 672))
end
local Client = game.Players.LocalPlayer
local STOP = require(Client.PlayerScripts.CombatFramework.Particle)
local STOPRL = require(game:GetService("ReplicatedStorage").CombatFramework.RigLib)
spawn(function()
    while task.wait() do
        pcall(function()
            if not shared.orl then shared.orl = STOPRL.wrapAttackAnimationAsync end
            if not shared.cpc then shared.cpc = STOP.play end
                STOPRL.wrapAttackAnimationAsync = function(a,b,c,d,func)
                local Hits = STOPRL.getBladeHits(b,c,d)
                if Hits then
                    if _G.LuaAttack then
                        STOP.play = function() end
                        a:Play(0.01,0.01,0.01)
                        func(Hits)
                        STOP.play = shared.cpc
                        wait(a.length * 0.7)
                        a:Stop()
                    else
                        a:Play()
                    end
                end
            end
        end)
    end
end)

function GetBladeHit()
local CombatFrameworkLib = debug.getupvalues(require(game:GetService("Players").LocalPlayer.PlayerScripts.CombatFramework))
local CmrFwLib = CombatFrameworkLib[2]
local p13 = CmrFwLib.activeController
local weapon = p13.blades[1]
if not weapon then 
    return weapon
end
while weapon.Parent ~= game.Players.LocalPlayer.Character do
    weapon = weapon.Parent 
end
return weapon
end
function AttackHit()
local CombatFrameworkLib = debug.getupvalues(require(game:GetService("Players").LocalPlayer.PlayerScripts.CombatFramework))
local CmrFwLib = CombatFrameworkLib[2]
local plr = game.Players.LocalPlayer
for i = 1, 1 do
    local bladehit = require(game.ReplicatedStorage.CombatFramework.RigLib).getBladeHits(plr.Character,{plr.Character.HumanoidRootPart},60)
    local cac = {}
    local hash = {}
    for k, v in pairs(bladehit) do
        if v.Parent:FindFirstChild("HumanoidRootPart") and not hash[v.Parent] then
            table.insert(cac, v.Parent.HumanoidRootPart)
            hash[v.Parent] = true
        end
    end
    bladehit = cac
    if #bladehit > 0 then
        pcall(function()
            CmrFwLib.activeController.timeToNextAttack = -1
            CmrFwLib.activeController.attacking = false
            CmrFwLib.activeController.blocking = false
            CmrFwLib.activeController.timeToNextBlock = 0
            CmrFwLib.activeController.increment = 1 + 1 + math.huge
            CmrFwLib.activeController.hitboxMagnitude = 200
            CmrFwLib.activeController.focusStart = 0
            game:GetService("ReplicatedStorage").RigControllerEvent:FireServer("weaponChange",tostring(GetBladeHit()))
            game:GetService("ReplicatedStorage").RigControllerEvent:FireServer("hit", bladehit, 2, "")
        end)
    end
end
end
spawn(function()
while wait(.1) do
    if _G.LuaAttack then
        pcall(function()
            repeat task.wait(_G.DelayFast)
                AttackHit()
            until not _G.LuaAttack
        end)
    end
end
end)
print("Script Loading Completed !")
--------------------------------------------------------------------------------------------------------------------------------------------
