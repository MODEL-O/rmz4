// undefined FUN_08093014(void)
// entry 0x8093014


undefined4 FUN_08093014(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  undefined4 in_lr;
  
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*DAT_08093074 + 0x54);
  uVar4 = *(byte *)(DAT_08093078 + DAT_0809307c) & 0x10;
  if ((*(byte *)(DAT_08093078 + DAT_0809307c) & 0x10) == 0) {
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080930cc);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 4);
    *(undefined1 *)(param_1 + 0xd) = 9;
    uVar2 = (undefined1)uVar4;
    *(undefined1 *)(param_1 + 0xe) = uVar2;
    *(undefined1 *)(param_1 + 0xf) = uVar2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(uint *)(param_1 + 0x2c) = uVar4;
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54);
    *(undefined1 *)(param_1 + 0xb9) = uVar2;
    *(undefined1 *)(param_1 + 0xba) = uVar2;
    FUN_0801cc9c(param_1);
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    FUN_0801cf00(param_1,DAT_0809312c);
    FUN_0801cff0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_08093130,param_1 + 0x54,10);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_08093134;
    FUN_08093138(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08093080);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0xc);
  }
  return in_lr;
}


