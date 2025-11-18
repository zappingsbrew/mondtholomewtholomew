[Variables]
; It's recommened you use any text editor other than Notepad.
; eg. VS Code, NeoVim, Notepad++

; Read the Mondtholomewtholomew wiki for commonly changed variables and examples
; https://github.com/zappingsbrew/mondtholomewtholomew/wiki/Common-variables

; ███████ ███████ ████████ ████████ ██ ███    ██  ██████  ███████ 
; ██      ██         ██       ██    ██ ████   ██ ██       ██      
; ███████ █████      ██       ██    ██ ██ ██  ██ ██   ███ ███████ 
;      ██ ██         ██       ██    ██ ██  ██ ██ ██    ██      ██ 
; ███████ ███████    ██       ██    ██ ██   ████  ██████  ███████

; Preinstalled fonts: Quicksand | Anurati | Aquatico | Fira Sans
; You can also use any font you have installed on your system
; CHANGING THE CLOCKFONT
; Uncomment ClockFont and follow the instructions in .../Clock/Meters.inc (Changing the ClockFont) if you want to use custom fonts.
; ClockFont=
ClockFont0=Quicksand
ClockFont1=Anurati
ClockFontIdx=0
FontFace=Quicksand

; Global font weight
FontWeight=700

; Force all string meters to be in UPPER, lower or Proper Case
; Upper | Lower | Proper | None (no modification)
StringCase=Upper

; Colors in R,G,B https://goo.gl/search/color+picker
; These colors are used in all Mondtholomewtholomew skins. Do not include an alpha value (a fourth number).
; If you only want to change a specific skins color, find it under that skins settings.
MainColor=255,255,255
AccentColor=250,126,0

; Shared button spacing for both the Player and Cover skins
MediaButtonSpacing=8

;  ██████ ██       ██████   ██████ ██   ██ 
; ██      ██      ██    ██ ██      ██  ██  
; ██      ██      ██    ██ ██      █████   
; ██      ██      ██    ██ ██      ██  ██  
;  ██████ ███████  ██████   ██████ ██   ██

; Change the language used by the clock to display the week day and month text
; Use "en" for English and "Local" for your system's locale
; Read more: https://docs.rainmeter.net/manual/measures/time/#FormatLocale
; All valid language codes https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-lcid/a9eac961-e77d-41a6-90a5-ce1a8b0cdb9c
LanguageCode=Local
; Change the Clock formats
; Use "%H : %M" for 24h time and "%I : %M %p" for 12h time
; Read more: https://docs.rainmeter.net/manual/measures/time/#FormatCodes
MeasureTimeFormat=- %I : %M %p -
; Date format. Refer to the previous link.
MeasureDateFormat=%B %d, %Y
; Day format. Refer to the previous link.
MeasureDayFormat=%A

; Clock color overrides
ClockBaseColor=#MainColor#,255
ClockAccentColor=#AccentColor#,255

; Clock inline effects. Applies accent color to digits.
; Read more: https://docs.rainmeter.net/manual/meters/string/inline/
ClockInlinePattern=.*
ClockInline=CharacterSpacing | (#ClockCharacterSpacing# * #Scale#) | (#ClockCharacterSpacing# * #Scale#)
DateInlinePattern=^[A-Za-z]+|[0-9]{4}$
DateInline=Color | #ClockAccentColor#
TimeInlinePattern=\d
TimeInline=Color | #ClockAccentColor#
ClockCharacterSpacing=4

; ██████  ██       █████  ██    ██ ███████ ██████  
; ██   ██ ██      ██   ██  ██  ██  ██      ██   ██ 
; ██████  ██      ███████   ████   █████   ██████  
; ██      ██      ██   ██    ██    ██      ██   ██ 
; ██      ███████ ██   ██    ██    ███████ ██   ██

; Max width of the player skin
PlayerMaxWidth=500

; Where to get media information. WebNowPlaying tries to fetch information from the browser addon. NowPlaying gets data from a local media player.
; WebNowPlaying | NowPlaying
PlayerPlugin=WebNowPlaying

; Local player to get media information from. Only works with NowPlaying.
; https://docs.rainmeter.net/manual/measures/nowplaying/#playerlist
; AIMP | CAD | iTunes | Winamp | WMP 
PlayerName=Winamp

; Player skin left and right information
; Start | Duration | Remaining | Position
PlayerLeft=Position
PlayerRight=Duration

; Enables smooth progress bar (might cause minor performance issues)
SmoothProgress=0

; Character to insert between Artist and Title in the player skin.
; For a new line, use #CRLF#
ArtistTitleSeparator=" - "

; Toggles title extraction. Only works with WebNowPlaying.
; Useful when the title of the media has duplicated or unnecessary information.
; For example, the song "Fake Friends" posted on the YouTube channel "MANON" has the title "MANON / Fake Friends (Music Video)"
; Title extraction removes the duplicated artist name and "(Music Video)" from the information displayed
; TitleExtraction=0 -> MANON - MANON / Fake Friends (Music Video)
; TitleExtraction=1 -> MANON - Fake Friends
TitleExtraction=1
SanitizeArtist=1

; Player color overrides
PlayerMainColor=#MainColor#
PlayerAccentColor=#AccentColor#
PlayerHoverColor=#PlayerAccentColor#

; Player alphas
ProgressDotHaloColor=#PlayerMainColor#,50
ProgressDotColor=#PlayerAccentColor#,150
ProgressLineBackgroundColor=#PlayerMainColor#,105
ProgressLineColor=#PlayerMainColor#,255

; Quirky little regex to highlight unusual chracters in media titles / artist names
; Set to ^$ to safely disable the highlight.
PlayerInfoInlinePattern=[^\w|\[|\]|\(|\)|\{|\}|\-|\.|\,]
PlayerInfoInline=Color | #PlayerAccentColor#

;  ██████  ██████  ██    ██ ███████ ██████  
; ██      ██    ██ ██    ██ ██      ██   ██ 
; ██      ██    ██ ██    ██ █████   ██████  
; ██      ██    ██  ██  ██  ██      ██   ██ 
;  ██████  ██████    ████   ███████ ██   ██ 

; Dimensions (these are scaled by the skin)
CoverWidth=200
CoverHeight=#CoverWidth#

; Cover outline and rounding settings
CoverOutlineWidth=2
CoverCornerRounding=(#CoverWidth# / 2)

; Cover colors
CoverMainColor=#MainColor#
CoverAccentColor=#AccentColor#
CoverHoverColor=#CoverAccentColor#

; Cover outline colors
CoverOutlineColor=#CoverMainColor#
CoverOutlineHoverColor=#CoverAccentColor#

; Brightness from 0 - 255
CoverTint=255
CoverTintOnHover=100
CoverInfo=0
CoverInfoOnHover=255

; Quirky little regex to highlight unusual chracters in media titles / artist names
; Set to ^$ to safely disable the highlight.
CoverInfoInlinePattern=[^\w|\[|\]|\(|\)|\{|\}|\-|\.|\,]
CoverrInfoInlinePattern=Color | #CoverAccentColor#

; ██     ██ ███████  █████  ████████ ██   ██ ███████ ██████  
; ██     ██ ██      ██   ██    ██    ██   ██ ██      ██   ██ 
; ██  █  ██ █████   ███████    ██    ███████ █████   ██████  
; ██ ███ ██ ██      ██   ██    ██    ██   ██ ██      ██   ██ 
;  ███ ███  ███████ ██   ██    ██    ██   ██ ███████ ██   ██

; Max width of the weather skin
WeatherMaxWidth=192

; Weather color overrides
WeatherMainColor=#MainColor#
WeatherAccentColor=#AccentColor#

; Weather icon colors
WeatherIconColor=#WeatherMainColor#
WeatherIconAccent=#WeatherAccentColor#

; Unit system to use when reporting temperature
; e (Imperial) | m (Metric) | h (Hybrid)
WeatherUnits=m
; Language to use when reporting conditions like cloudy, rain, snow etc.
WeatherLanguageCode=en-US

; ██    ██ ██ ███████ ██    ██  █████  ██      ██ ███████ ███████ ██████  
; ██    ██ ██ ██      ██    ██ ██   ██ ██      ██    ███  ██      ██   ██ 
; ██    ██ ██ ███████ ██    ██ ███████ ██      ██   ███   █████   ██████  
;  ██  ██  ██      ██ ██    ██ ██   ██ ██      ██  ███    ██      ██   ██ 
;   ████   ██ ███████  ██████  ██   ██ ███████ ██ ███████ ███████ ██   ██

; Visualizer colors
VisualizerMainColor=#PlayerMainColor#
VisualizerAccentColor=#PlayerAccentColor#

; After changing Bands you will have to refresh the visualizer skin twice.
; Rainmeter can't really handle more than 50-80 bands when AudioLevelBeta is enabled.
; With normal AudioLevel you can have at least a 1000 bands before Rainmeter has issues.
; Your computer might have issues before that though.
Bands=50
VisWidth=4.6
VisHeight=100
VisMinHeight=0
VisPaddingHorizontal=3
VisRounding=(#VisWidth# / 2)
; Fill color used when VisFade=0
VisFillColor=#VisualizerMainColor#
; Toggle gradient fill. 
VisFade=1
VisFadeStartColor=#VisualizerMainColor#,255
VisFadeEndColor=#VisualizerMainColor#,0
; Gradient start and end positions (0.0 - 1.0 as a percentage of the total height)
VisFadeStart=0
VisFadeEnd=0.8
; Gradient direction in degrees
VisFadeDirection=270

;  █████  ██    ██ ██████  ██  ██████  ██      ███████ ██    ██ ███████ ██      
; ██   ██ ██    ██ ██   ██ ██ ██    ██ ██      ██      ██    ██ ██      ██      
; ███████ ██    ██ ██   ██ ██ ██    ██ ██      █████   ██    ██ █████   ██      
; ██   ██ ██    ██ ██   ██ ██ ██    ██ ██      ██       ██  ██  ██      ██      
; ██   ██  ██████  ██████  ██  ██████  ███████ ███████   ████   ███████ ███████

; Accuracy is the number of frames or blocks of audio to keep in memory for analyzing.
; Lower accuracy means faster responsiveness and vice versa.
Accuracy=5
; Level of smoothing applied to the band measures (AverageSize)
SmoothnessLevel=3

; Ideally you would turn up your audio source (eg. a youtube video) to 100% in both the browser and the windows audio mixer. If that's too loud, turn down the windows main volume.

; BAD                               ; GOOD
; Windows Audio Mixer               ; Windows Audio Mixer
;   █                       █       ;
;   █                       █       ;
;   █          █            █       ;    █          █         █
; Volume    Firefox     Rainmeter   ;  Volume    Firefox  Rainmeter

; If you can't or won't turn your audio source to 100%, you can use Sensitivity to make Rainmeter react to quieter sounds
Sensitivity=35

; Attack is the time it takes for the bars to rise. 
FFTAttack=0
; Decay is the time it takes for the bars to go back down.
FFTDecay=0

; Frequency range to analyze. The human hearing range is 20hz - 20khz
FreqMin=20
FreqMax=16000

; Change this to 48000 if AudioLevel reports errors that say "FFT must be a multiple of 2" or something similar.
; The real fix is to set your audio devices sample rate to 48k / 96k from windows audio settings but if that's not possible, use this.
; If the errors persist, check that the FPS value is 60 or 100 or at least an even number.
SamplingRateOverride=\1

; ██████  ███████  ██████ ██    ██  ██████ ██      ███████     ██████  ██ ███    ██ 
; ██   ██ ██      ██       ██  ██  ██      ██      ██          ██   ██ ██ ████   ██ 
; ██████  █████   ██        ████   ██      ██      █████       ██████  ██ ██ ██  ██ 
; ██   ██ ██      ██         ██    ██      ██      ██          ██   ██ ██ ██  ██ ██ 
; ██   ██ ███████  ██████    ██     ██████ ███████ ███████     ██████  ██ ██   ████

; Recycle bin colors
BinMainColor=#MainColor#
BinAccentColor=#AccentColor#

; ██ ███    ██ ████████ ███████ ██████  ███    ██  █████  ██      
; ██ ████   ██    ██    ██      ██   ██ ████   ██ ██   ██ ██      
; ██ ██ ██  ██    ██    █████   ██████  ██ ██  ██ ███████ ██      
; ██ ██  ██ ██    ██    ██      ██   ██ ██  ██ ██ ██   ██ ██      
; ██ ██   ████    ██    ███████ ██   ██ ██   ████ ██   ██ ███████ 

; Edit #@#Language.inc to change most text in the skin

; Acceptable values: https://en.wikipedia.org/wiki/Real_number
ScrollMouseIncrement=0.1


; !!! AUDIOLEVELBETA AND THE FPS SETTING ARE UNSTABLE !!!

; When enabling or disabling AudioLevelBeta, refresh the visualizer twice to generate and use the new measures. It may crash in the process.
EnableAudioLevelBeta=0
; While AudioLevelBeta is enabled, the following things might cause a crash:
;   - Inspecting the visualizer skin from About > Skins
;   - Disabling / enabling AudioLevelBeta.
;   - FPS or Accuracy not being nice numbers that ALB likes :3

; Rainmeter can only do about 60 fps natively. Enable AudioLevelBeta to get more FPS.
; If it's crashing but you want more FPS than 60, try using FPS=100, it seems to like that number.
; If Rainmeter crashes independent of AudioLevelBeta, FPS and Accuracy, see the SamplingRateOverride setting.
FPS=60
