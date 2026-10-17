; undefined FUN_080e57ac(void)
; entry 0x80e57ac  size 32 bytes

080E57AC: 10b5         push {r4,lr}
080E57AE: 041c         add r4,r0,#0x0
080E57B0: 0649         ldr r1,[0x080e57cc]
080E57B2: 607b         ldrb r0,[r4,#0xd]
080E57B4: 8000         lsl r0,r0,#0x2
080E57B6: 4018         add r0,r0,r1
080E57B8: 0168         ldr r1,[r0,#0x0]
080E57BA: 201c         add r0,r4,#0x0
080E57BC: 43f0e0fb     bl 0x08128f80
080E57C0: 201c         add r0,r4,#0x0
080E57C2: 37f715fc     bl 0x0801cff0
080E57C6: 10bc         pop {r4}
080E57C8: 01bc         pop {r0}
080E57CA: 0047         bx r0
