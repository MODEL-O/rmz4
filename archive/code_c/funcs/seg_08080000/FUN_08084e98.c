// undefined FUN_08084e98(void)
// entry 0x8084e98


undefined4 FUN_08084e98(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08084ed0);
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 < 2) {
      FUN_0801cf00(param_1,DAT_08084ed4);
      if (*(byte *)(param_1 + 0x11) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      bVar1 = *(byte *)(param_1 + 0x11) & 1;
      *(byte *)(param_1 + 0x4c) = bVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x11) * 0x400 + DAT_08084f0c;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      if ((bVar1 & 1) == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xdf;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x20;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(byte *)(param_1 + 0x4d) = bVar1 & 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | (bVar1 & 1) << 5;
      FUN_0801cf00(param_1,DAT_08084fb0);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(uint *)(param_1 + 0x60) = (*(byte *)(param_1 + 0x11) & 1) * 0x400 + DAT_08084fb4;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  FUN_0801cff0(param_1);
  puVar5 = (uint *)(param_1 + 0x8c);
  if ((*puVar5 & 4) == 0) {
    uVar3 = FUN_0801fb14(DAT_08085004,param_1 + 0x54);
    if (uVar3 < 0x1001) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar5 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
  }
  else {
    FUN_080d0c88(2,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar5 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08085008);
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
  return in_lr;
}


