; undefined FUN_080cd228(void)
; entry 0x80cd228  size 48 bytes

080CD228: 00b5         push {lr}
080CD22A: 021c         add r2,r0,#0x0
080CD22C: b430         add r0,#0xb4
080CD22E: 0078         ldrb r0,[r0,#0x0]
080CD230: 0028         cmp r0,#0x0
080CD232: 0fd0         beq 0x080cd254
080CD234: 0649         ldr r1,[0x080cd250]
080CD236: 507a         ldrb r0,[r2,#0x9]
080CD238: 8000         lsl r0,r0,#0x2
080CD23A: 4018         add r0,r0,r1
080CD23C: 0221         mov r1,#0x2
080CD23E: d160         str r1,[r2,#0xc]
080CD240: 0068         ldr r0,[r0,#0x0]
080CD242: 8068         ldr r0,[r0,#0x8]
080CD244: 5061         str r0,[r2,#0x14]
080CD246: 101c         add r0,r2,#0x0
080CD248: 00f00af8     bl 0x080cd260
080CD24C: 05e0         b 0x080cd25a
080CD254: 101c         add r0,r2,#0x0
080CD256: 4ff7cbfe     bl 0x0801cff0
080CD25A: 01bc         pop {r0}
080CD25C: 0047         bx r0
