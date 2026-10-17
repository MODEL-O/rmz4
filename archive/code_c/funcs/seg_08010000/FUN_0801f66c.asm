; undefined FUN_0801f66c(void)
; entry 0x801f66c  size 36 bytes

0801F66C: 10b5         push {r4,lr}
0801F66E: 0849         ldr r1,[0x0801f690]
0801F670: c870         strb r0,[r1,#0x3]
0801F672: 084c         ldr r4,[0x0801f694]
0801F674: 201c         add r0,r4,#0x0
0801F676: fff74ff9     bl 0x0801e918
0801F67A: 9c21         mov r1,#0x9c
0801F67C: 4900         lsl r1,r1,#0x1
0801F67E: 6018         add r0,r4,r1
0801F680: 0068         ldr r0,[r0,#0x0]
0801F682: d834         add r4,#0xd8
0801F684: 211c         add r1,r4,#0x0
0801F686: 18f02dfe     bl 0x080382e4
0801F68A: 10bc         pop {r4}
0801F68C: 01bc         pop {r0}
0801F68E: 0047         bx r0
