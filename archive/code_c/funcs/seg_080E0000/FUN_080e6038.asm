; undefined FUN_080e6038(void)
; entry 0x80e6038  size 70 bytes

080E6038: 10b5         push {r4,lr}
080E603A: 82b0         sub sp,#0x8
080E603C: 041c         add r4,r0,#0x0
080E603E: 606d         ldr r0,[r4,#0x54]
080E6040: 0090         str r0,[sp,#0x0]
080E6042: a06d         ldr r0,[r4,#0x58]
080E6044: e021         mov r1,#0xe0
080E6046: 4901         lsl r1,r1,#0x5
080E6048: 4018         add r0,r0,r1
080E604A: 0190         str r0,[sp,#0x4]
080E604C: 0120         mov r0,#0x1
080E604E: 6946         mov r1,sp
080E6050: eaf71afe     bl 0x080d0c88
080E6054: 2a20         mov r0,#0x2a
080E6056: 1cf75bfd     bl 0x08002b10
080E605A: 0123         mov r3,#0x1
080E605C: 6374         strb r3,[r4,#0x11]
080E605E: 201c         add r0,r4,#0x0
080E6060: 5430         add r0,#0x54
080E6062: 8121         mov r1,#0x81
080E6064: 4900         lsl r1,r1,#0x1
080E6066: a27a         ldrb r2,[r4,#0xa]
080E6068: 1209         lsr r2,r2,#0x4
080E606A: 1a40         and r2,r3
080E606C: fff762fe     bl 0x080e5d34
080E6070: 201c         add r0,r4,#0x0
080E6072: fff731ff     bl 0x080e5ed8
080E6076: 02b0         add sp,#0x8
080E6078: 10bc         pop {r4}
080E607A: 01bc         pop {r0}
080E607C: 0047         bx r0
