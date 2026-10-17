; undefined FUN_080a979c(void)
; entry 0x80a979c  size 50 bytes

080A979C: 30b5         push {r4,r5,lr}
080A979E: 021c         add r2,r0,#0x0
080A97A0: 5069         ldr r0,[r2,#0x14]
080A97A2: 0121         mov r1,#0x1
080A97A4: 0840         and r0,r1
080A97A6: 0028         cmp r0,#0x0
080A97A8: 0ed0         beq 0x080a97c8
080A97AA: d068         ldr r0,[r2,#0xc]
080A97AC: c46a         ldr r4,[r0,#0x2c]
080A97AE: d56a         ldr r5,[r2,#0x2c]
080A97B0: 0d20         mov r0,#0xd
080A97B2: 5df7e7f8     bl 0x08006984
080A97B6: 0022         mov r2,#0x0
080A97B8: 616d         ldr r1,[r4,#0x54]
080A97BA: 686d         ldr r0,[r5,#0x54]
080A97BC: 8142         cmp r1,r0
080A97BE: 00dd         ble 0x080a97c2
080A97C0: 0122         mov r2,#0x1
080A97C2: 281c         add r0,r5,#0x0
080A97C4: bc30         add r0,#0xbc
080A97C6: 0270         strb r2,[r0,#0x0]
080A97C8: 30bc         pop {r4,r5}
080A97CA: 01bc         pop {r0}
080A97CC: 0047         bx r0
