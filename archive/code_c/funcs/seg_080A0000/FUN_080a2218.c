// undefined FUN_080a2218(void)
// entry 0x80a2218


undefined4 FUN_080a2218(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0x98) = DAT_080a22d0;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a22d4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  iVar2 = DAT_080a22d8;
  *(undefined4 *)(param_1 + 0x5c) =
       *(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 8 + DAT_080a22d8);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 8 + iVar2 + 4)
  ;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,(uint)*(byte *)(param_1 + 0x10) * 0x30 + DAT_080a22dc,param_1 + 0x54,4
              );
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x5c) * 0x17f;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  }
  if (*(char *)(param_1 + 0x10) == '\x03') {
    FUN_0801cf00(param_1,DAT_080a22e0);
  }
  else {
    FUN_0801cf00(param_1,DAT_080a2304 + (uint)*(byte *)(param_1 + 0x10) & 0xffff);
  }
  FUN_080a2308(param_1);
  return in_lr;
}


