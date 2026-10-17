; undefined FUN_0801b9ac(void)
; entry 0x801b9ac  size 34 bytes

0801B9AC: 00b5         push {lr}
0801B9AE: 0021         mov r1,#0x0
0801B9B0: 0165         str r1,[r0,#0x50]
0801B9B2: 826e         ldr r2,[r0,#0x68]
0801B9B4: 002a         cmp r2,#0x0
0801B9B6: 08d0         beq 0x0801b9ca
0801B9B8: 0549         ldr r1,[0x0801b9d0]
0801B9BA: 507a         ldrb r0,[r2,#0x9]
0801B9BC: 8000         lsl r0,r0,#0x2
0801B9BE: 4018         add r0,r0,r1
0801B9C0: 0221         mov r1,#0x2
0801B9C2: d160         str r1,[r2,#0xc]
0801B9C4: 0068         ldr r0,[r0,#0x0]
0801B9C6: 8068         ldr r0,[r0,#0x8]
0801B9C8: 5061         str r0,[r2,#0x14]
0801B9CA: 01bc         pop {r0}
0801B9CC: 0047         bx r0
