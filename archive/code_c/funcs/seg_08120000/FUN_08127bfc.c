// undefined FUN_08127bfc(void)
// entry 0x8127bfc


undefined4 FUN_08127bfc(uint param_1)

{
  short *psVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar6 = *DAT_08127c7c;
  *(char *)(iVar6 + 8) = (char)((param_1 & 0xf0000) >> 0x10);
  uVar7 = (uint)*(ushort *)((((param_1 & 0xf0000) >> 0x10) - 1) * 2 + DAT_08127c80);
  *(uint *)(iVar6 + 0x10) = uVar7;
  uVar2 = FUN_08128fb8(0x630,uVar7);
  *(undefined1 *)(iVar6 + 0xb) = uVar2;
  uVar4 = FUN_08128fb8(uVar7 * DAT_08127c84 + DAT_08127c88,DAT_08127c8c);
  *(undefined4 *)(iVar6 + 0x14) = uVar4;
  iVar5 = FUN_08128fb8(0x1000000);
  *(int *)(iVar6 + 0x18) = iVar5 + 1 >> 1;
  *DAT_08127c90 = 0;
  psVar1 = DAT_08127c94;
  sVar3 = FUN_08128fb8(DAT_08127c98,uVar7);
  *psVar1 = -sVar3;
  FUN_08127df0();
  do {
  } while (*DAT_08127c9c == -0x61);
  do {
  } while (*DAT_08127c9c != -0x61);
  *DAT_08127c90 = 0x80;
  return in_lr;
}


