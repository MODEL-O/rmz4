// undefined FUN_080007cc(void)
// entry 0x80007cc


void FUN_080007cc(void)

{
  ushort *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ushort *puVar5;
  *(undefined1 *)(0x03001590 + 0x00000165) = 1;
  FUN_08002664();
  puVar1 = 0x02000a04;
  FUN_08001fd4(0x0202f620,((*(ushort *)0x02000a04) & 0x1f00) << 3,0x580,0x3c0);
  iVar2 = 0x02000760;
  *(undefined1 *)(0x02000760 + 0x14) = 0x18;
  *(undefined1 *)(iVar2 + 0x15) = 4;
  *(undefined1 *)(iVar2 + 0x2c) = 0x18;
  *(undefined1 *)(iVar2 + 0x2d) = 4;
  puVar3 = 0x03002ac0;
  *(undefined1 *)((int)0x03002ac0 + 0x00000402) = 0x20;
  iVar2 = 0x00000401;
  *(undefined1 *)((int)puVar3 + 0x00000401) = 0x20;
  *(undefined1 *)((int)puVar3 + iVar2 + -1) = 0x20;
  *(undefined4 *)(puVar3 + 0x204) = 0;
  FUN_08002348();
  (*(int *)0x02000a40) = 0;
  puVar4 = 0x02000a50;
  (*(undefined2 *)0x02000a50) = 0;
  *(undefined1 *)(puVar4 + 7) = 0xff;
  (*(int *)0x02000a60) = 0;
  *puVar3 = 0;
  FUN_080029c0();
  FUN_0810d4a8();
  FUN_0810d568();
  puVar5 = puVar1 + -2;
  *puVar5 = (ushort)0x0000fff8 & *puVar5 & (ushort)0x0000f0ff | 0x100;
  puVar1[4] = 0;
  puVar1[5] = 0;
  if (*(char *)(0x0202f3b0 + 4) == '\0') {
    *puVar3 = (short)0x00007fff;
  }
  FUN_080012ec(1);
  FUN_080013b0(0x0810f6d1);
  return;
}


