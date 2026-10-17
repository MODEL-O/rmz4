// undefined FUN_0810ca54(void)
// entry 0x810ca54


undefined4 FUN_0810ca54(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810cab0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  FUN_0801cf00(param_1,DAT_0810cab4);
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x10) & 1;
  *(byte *)(param_1 + 0x4a) =
       *(byte *)(param_1 + 0x4a) & 0xef | (*(byte *)(param_1 + 0x10) & 1) << 4;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 0x10) >> 1 & 1;
  bVar1 = *(byte *)(param_1 + 0x10) >> 1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | (bVar1 & 1) << 5;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  FUN_0810cb08(param_1);
  return in_lr;
}


