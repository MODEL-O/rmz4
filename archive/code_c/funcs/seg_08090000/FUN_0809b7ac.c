// undefined FUN_0809b7ac(void)
// entry 0x809b7ac


undefined4 FUN_0809b7ac(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  undefined4 in_lr;
  undefined4 local_1c [2];
  
  local_1c[1] = DAT_0809b80c[1];
  local_1c[0] = *DAT_0809b80c;
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar3 = *(byte *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809b810);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(char *)(param_1 + 0x25) = (char)local_1c[bVar1];
  if (bVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar3 = bVar3 & 1;
  *(byte *)(param_1 + 0x4c) = bVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
  FUN_0809b848(param_1);
  return in_lr;
}


