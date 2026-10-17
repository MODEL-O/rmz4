// undefined FUN_080b65cc(void)
// entry 0x80b65cc


undefined4 FUN_080b65cc(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_18 = DAT_080b665c[1];
  local_1c = *DAT_080b665c;
  bVar1 = *(byte *)(param_1 + 0x10);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b6660);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cc9c(param_1);
  *(undefined1 *)(param_1 + 0x25) = 8;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080b6664,param_1 + 0x54,(int)*(short *)(&local_1c + bVar1));
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080b6668(param_1);
  return in_lr;
}


