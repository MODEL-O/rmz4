; undefined FUN_08112d18(void)
; entry 0x8112d18  size 60 bytes

08112D18: f0b5         push {r4,r5,r6,r7,lr}
08112D1A: 061c         add r6,r0,#0x0
08112D1C: 0d48         ldr r0,[0x08112d54]
08112D1E: 3418         add r4,r6,r0
08112D20: 0d48         ldr r0,[0x08112d58]
08112D22: b421         mov r1,#0xb4
08112D24: 4900         lsl r1,r1,#0x1
08112D26: 4718         add r7,r0,r1
08112D28: 3868         ldr r0,[r7,#0x0]
08112D2A: 6060         str r0,[r4,#0x4]
08112D2C: 0125         mov r5,#0x1
08112D2E: 6d42         rsb r5,r5
08112D30: a842         cmp r0,r5
08112D32: 04d0         beq 0x08112d3e
08112D34: 0004         lsl r0,r0,#0x10
08112D36: 000c         lsr r0,r0,#0x10
08112D38: eff6aefe     bl 0x08002a98
08112D3C: 3d60         str r5,[r7,#0x0]
08112D3E: 0120         mov r0,#0x1
08112D40: 6070         strb r0,[r4,#0x1]
08112D42: 0648         ldr r0,[0x08112d5c]
08112D44: a060         str r0,[r4,#0x8]
08112D46: 301c         add r0,r6,#0x0
08112D48: 0521         mov r1,#0x5
08112D4A: fff7affc     bl 0x081126ac
08112D4E: f0bc         pop {r4,r5,r6,r7}
08112D50: 01bc         pop {r0}
08112D52: 0047         bx r0
