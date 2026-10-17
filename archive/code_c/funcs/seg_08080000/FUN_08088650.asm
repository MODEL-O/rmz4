; undefined FUN_08088650(void)
; entry 0x8088650  size 20 bytes

08088650: 00b5         push {lr}
08088652: 044a         ldr r2,[0x08088664]
08088654: 417b         ldrb r1,[r0,#0xd]
08088656: 8900         lsl r1,r1,#0x2
08088658: 8918         add r1,r1,r2
0808865A: 0968         ldr r1,[r1,#0x0]
0808865C: a0f090fc     bl 0x08128f80
08088660: 01bc         pop {r0}
08088662: 0047         bx r0
