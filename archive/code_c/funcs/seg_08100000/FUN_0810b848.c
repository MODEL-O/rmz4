// undefined FUN_0810b848(void)
// entry 0x810b848


undefined4 FUN_0810b848(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar3 = (uint)(bVar1 >> 4);
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(uVar3 + DAT_0810b8c8);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(uint *)(param_1 + 0x54) = (bVar1 & 0xf) * 0x800 + 0x11c00;
  *(uint *)(param_1 + 0x58) = uVar3 * 0x2000 + 0x2800;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810b8cc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0810b774(param_1);
  return in_lr;
}


