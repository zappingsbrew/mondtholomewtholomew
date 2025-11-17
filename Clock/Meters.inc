[ClockBase]
AntiAlias=1
StringAlign=Center
StringCase=#StringCase#
FontColor=#ClockBaseColor#
FontFace=#FontFace#
FontSize=(14 * #Scale#)
Group=Time
Y=5R
X=(Max([MeterDay:W], Max([MeterDate:W], [MeterTime:W])) / 2)
DynamicVariables=1
FontWeight=#FontWeight#

[DayStyle]
; CHANGING THE CLOCKFONT
; Change this to "FontFace=#ClockFont" and follow the instructions in variables.inc (Changing the ClockFont) if you want to use custom fonts.
FontFace=[#ClockFont[#ClockFontIdx]]
FontSize=(40 * #Scale#)
InlinePattern=#ClockInlinePattern#
InlineSetting=#ClockInline#
Y=0

[DateStyle]
InlinePattern=#DateInlinePattern#
InlineSetting=#DateInline#

[TimeStyle]
InlinePattern=#TimeInlinePattern#
InlineSetting=CharacterSpacing | (-15 * #Scale#) | (-15 * #Scale#) | (9 * #Scale#)
InlineSetting2=#TimeInline#

[MeterDay]
Meter=String
MeasureName=MeasureDay
MeterStyle=ClockBase | DayStyle

[MeterDate]
Meter=String
MeterStyle=ClockBase | DateStyle
MeasureName=MeasureDate

[MeterTime]
Meter=String
MeterStyle=ClockBase | TimeStyle
MeasureName=MeasureTime
