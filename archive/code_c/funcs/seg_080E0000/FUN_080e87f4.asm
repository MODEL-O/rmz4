; undefined FUN_080e87f4(void)
; entry 0x80e87f4  size 48 bytes

080E87F4: 00b5         push {lr}
080E87F6: 021c         add r2,r0,#0x0
080E87F8: 107c         ldrb r0,[r2,#0x10]
080E87FA: 0428         cmp r0,#0x4
080E87FC: 0dd8         bhi 0x080e881a
080E87FE: 101c         add r0,r2,#0x0
080E8800: 7330         add r0,#0x73
080E8802: 0078         ldrb r0,[r0,#0x0]
080E8804: 0328         cmp r0,#0x3
080E8806: 08d1         bne 0x080e881a
080E8808: 0649         ldr r1,[0x080e8824]
080E880A: 507a         ldrb r0,[r2,#0x9]
080E880C: 8000         lsl r0,r0,#0x2
080E880E: 4018         add r0,r0,r1
080E8810: 0221         mov r1,#0x2
080E8812: d160         str r1,[r2,#0xc]
080E8814: 0068         ldr r0,[r0,#0x0]
080E8816: 8068         ldr r0,[r0,#0x8]
080E8818: 5061         str r0,[r2,#0x14]
080E881A: 101c         add r0,r2,#0x0
080E881C: 34f7e8fb     bl 0x0801cff0
080E8820: 01bc         pop {r0}
080E8822: 0047         bx r0
