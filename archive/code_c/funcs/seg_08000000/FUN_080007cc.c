// undefined FUN_080007cc(void)
// entry 0x80007cc


undefined4 FUN_080007cc(void)

{
  ushort *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ushort *puVar5;
  undefined4 in_lr;
  
  *(undefined1 *)(DAT_08000888 + DAT_0800088c) = 1;
  FUN_08002664();
  puVar1 = DAT_08000894;
  FUN_08001fd4(DAT_08000890,(*DAT_08000894 & 0x1f00) << 3,0x580,0x3c0);
  iVar2 = DAT_08000898;
  *(undefined1 *)(DAT_08000898 + 0x14) = 0x18;
  *(undefined1 *)(iVar2 + 0x15) = 4;
  *(undefined1 *)(iVar2 + 0x2c) = 0x18;
  *(undefined1 *)(iVar2 + 0x2d) = 4;
  puVar3 = DAT_0800089c;
  *(undefined1 *)((int)DAT_0800089c + DAT_080008a0) = 0x20;
  iVar2 = DAT_080008a4;
  *(undefined1 *)((int)puVar3 + DAT_080008a4) = 0x20;
  *(undefined1 *)((int)puVar3 + iVar2 + -1) = 0x20;
  *(undefined4 *)(puVar3 + 0x204) = 0;
  FUN_08002348();
  *DAT_080008a8 = 0;
  puVar4 = DAT_080008ac;
  *DAT_080008ac = 0;
  *(undefined1 *)(puVar4 + 7) = 0xff;
  *DAT_080008b0 = 0;
  *puVar3 = 0;
  FUN_080029c0();
  FUN_0810d4a8();
  FUN_0810d568();
  puVar5 = puVar1 + -2;
  *puVar5 = (ushort)DAT_080008b4 & *puVar5 & (ushort)DAT_080008b8 | 0x100;
  puVar1[4] = 0;
  puVar1[5] = 0;
  if (*(char *)(DAT_080008bc + 4) == '\0') {
    *puVar3 = (short)DAT_080008c0;
  }
  FUN_080012ec(1);
  FUN_080013b0(DAT_080008c4);
  return in_lr;
}


