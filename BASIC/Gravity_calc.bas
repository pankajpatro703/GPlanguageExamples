'    Copyright 2020 Pankajkumar Patro Licensed under the
'    Educational Community License, Version 2.0 (the "License"); you may
'    not use this file except in compliance with the License. You may
'    obtain a copy of the License at
'    
'    http://www.osedu.org/licenses/ECL-2.0
'
'    Unless required by applicable law or agreed to in writing,
'    software distributed under the License is distributed on an "AS IS"
'    BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express
'    or implied. See the License for the specific language governing
'    permissions and limitations under the License.

Dim a As Integer
Dim b As Variant

Private Sub c_Calculate_Click()
If IsNumeric(Text1.Text) = True And Val(Text1.Text) > 0 Then
a = Combo1.ListIndex
If (a >= 0) And (a < 9) Then
Select Case a
Case 0
b = Val(Text1.Text) * (278 / 9.798)
Case 1
b = Val(Text1.Text) * (1.624 / 9.798)
Case 2
b = Val(Text1.Text) * (3.699 / 9.798)
Case 3
b = Val(Text1.Text) * (3.876 / 9.798)
Case 4
b = Val(Text1.Text) * (3.7129 / 9.798)
Case 5
b = Val(Text1.Text) * (24.92 / 9.798)
Case 6
b = Val(Text1.Text) * (10.45 / 9.798)
Case 7
b = Val(Text1.Text) * (8.87 / 9.798)
Case 8
b = Val(Text1.Text) * (11.15 / 9.798)
End Select
Text2.Text = "You will weigh " & FormatNumber(b, 2)
Text2.Text = Text2.Text + " kg.wt"
Else
Text2.Text = "Please select"
End If
Else
Text2.Text = "Error"
End If
End Sub

Private Sub c_Help_Click()
a = MsgBox("1.Please enter your weight on Earth." & vbCrLf & "2.Select an astronomical body from given list." & vbCrLf & "3.Click 'Calculate'.", vbOKOnly, "Help")
End Sub

Private Sub c_Clear_Click()
Text1.Text = " "
Text2.Text = " "
Combo1.Text = "Select"
End Sub

Private Sub c_About_Click()
b = MsgBox("Project on 'Digital Content Creation'." & vbCrLf & "GRAVITY CALCULATOR" & vbCrLf & "-by Pankajkumar Patro(FE-B-19)." & vbCrLf & "Any resemblance to another software is purely coincidental." & vbCrLf & "No rights Reserved.", vbOKOnly, "About")
End Sub

Private Sub Image1_Click()

End Sub
