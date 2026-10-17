@ FUN_0803882c  entry 0x0803882c  size 42
.thumb
.org 0x3882c
FUN_0803882c:
	push {lr}	@ 0003882c 00b5
.org 0x3882e
	movs r2, #159	@ 0003882e 9f22
.org 0x38830
	lsls r2, r2, #1	@ 00038830 5200
.org 0x38832
	adds r1, r0, r2	@ 00038832 8118
.org 0x38834
	ldrb r0, [r1, #0]	@ 00038834 0878
.org 0x38836
	cmp r0, #0	@ 00038836 0028
.org 0x38838
	bne.n 0x38840	@ 00038838 02d1
.org 0x3883a
	movs r0, #176	@ 0003883a b020
.org 0x3883c
	lsls r0, r0, #3	@ 0003883c c000
.org 0x3883e
	b.n 0x38852	@ 0003883e 08e0
.org 0x38840
	ldrb r0, [r1, #0]	@ 00038840 0878
.org 0x38842
	movs r1, #128	@ 00038842 8021
.org 0x38844
	lsls r1, r1, #1	@ 00038844 4900
.org 0x38846
	subs r1, r1, r0	@ 00038846 091a
.org 0x38848
	lsls r0, r1, #1	@ 00038848 4800
.org 0x3884a
	adds r0, r0, r1	@ 0003884a 4018
.org 0x3884c
	lsls r0, r0, #2	@ 0003884c 8000
.org 0x3884e
	subs r0, r0, r1	@ 0003884e 401a
.org 0x38850
	asrs r0, r0, #1	@ 00038850 4010
.org 0x38852
	pop {r1}	@ 00038852 02bc
.org 0x38854
	bx r1	@ 00038854 0847
