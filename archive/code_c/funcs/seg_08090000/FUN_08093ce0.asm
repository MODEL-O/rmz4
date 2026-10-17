; undefined FUN_08093ce0(void)
; entry 0x8093ce0  size 76 bytes

08093CE0: 10b5         push {r4,lr}
08093CE2: 041c         add r4,r0,#0x0
08093CE4: e07b         ldrb r0,[r4,#0xf]
08093CE6: 0028         cmp r0,#0x0
08093CE8: 0bd1         bne 0x08093d02
08093CEA: 201c         add r0,r4,#0x0
08093CEC: 7430         add r0,#0x74
08093CEE: 0f49         ldr r1,[0x08093d2c]
08093CF0: 71f748fd     bl 0x08005784
08093CF4: 0e49         ldr r1,[0x08093d30]
08093CF6: 201c         add r0,r4,#0x0
08093CF8: 89f702f9     bl 0x0801cf00
08093CFC: e07b         ldrb r0,[r4,#0xf]
08093CFE: 0130         add r0,#0x1
08093D00: e073         strb r0,[r4,#0xf]
08093D02: 201c         add r0,r4,#0x0
08093D04: 89f774f9     bl 0x0801cff0
08093D08: 0a48         ldr r0,[0x08093d34]
08093D0A: 806b         ldr r0,[r0,#0x38]
08093D0C: 616d         ldr r1,[r4,#0x54]
08093D0E: 401a         sub r0,r0,r1
08093D10: 9821         mov r1,#0x98
08093D12: 0902         lsl r1,r1,#0x8
08093D14: 4018         add r0,r0,r1
08093D16: 9821         mov r1,#0x98
08093D18: 4902         lsl r1,r1,#0x9
08093D1A: 8842         cmp r0,r1
08093D1C: 03d8         bhi 0x08093d26
08093D1E: 0021         mov r1,#0x0
08093D20: 0120         mov r0,#0x1
08093D22: a073         strb r0,[r4,#0xe]
08093D24: e173         strb r1,[r4,#0xf]
08093D26: 10bc         pop {r4}
08093D28: 01bc         pop {r0}
08093D2A: 0047         bx r0
