; undefined FUN_0810d3ac(void)
; entry 0x810d3ac  size 24 bytes

0810D3AC: 30b5         push {r4,r5,lr}
0810D3AE: 0468         ldr r4,[r0,#0x0]
0810D3B0: 4568         ldr r5,[r0,#0x4]
0810D3B2: 0a68         ldr r2,[r1,#0x0]
0810D3B4: 4b68         ldr r3,[r1,#0x4]
0810D3B6: 201c         add r0,r4,#0x0
0810D3B8: 291c         add r1,r5,#0x0
0810D3BA: fff7edff     bl 0x0810d398
0810D3BE: 30bc         pop {r4,r5}
0810D3C0: 02bc         pop {r1}
0810D3C2: 0847         bx r1
