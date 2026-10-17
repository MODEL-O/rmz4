; undefined FUN_080e3864(void)
; entry 0x80e3864  size 32 bytes

080E3864: 10b5         push {r4,lr}
080E3866: 041c         add r4,r0,#0x0
080E3868: 0649         ldr r1,[0x080e3884]
080E386A: 607b         ldrb r0,[r4,#0xd]
080E386C: 8000         lsl r0,r0,#0x2
080E386E: 4018         add r0,r0,r1
080E3870: 0168         ldr r1,[r0,#0x0]
080E3872: 201c         add r0,r4,#0x0
080E3874: 45f084fb     bl 0x08128f80
080E3878: 201c         add r0,r4,#0x0
080E387A: 39f7b9fb     bl 0x0801cff0
080E387E: 10bc         pop {r4}
080E3880: 01bc         pop {r0}
080E3882: 0047         bx r0
