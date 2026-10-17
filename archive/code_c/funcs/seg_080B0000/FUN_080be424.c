// undefined FUN_080be424(void)
// entry 0x80be424


undefined4 FUN_080be424(int param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    pbVar5 = (byte *)(param_1 + 0xb8);
    *pbVar5 = 0;
    FUN_0801cf00(param_1,*(undefined2 *)((uint)*pbVar5 * 2 + DAT_080be4d0));
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,(uint)*pbVar5 * 0x18 + DAT_080be4d4,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    uVar4 = 0x240;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = DAT_080be4d8;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_080be51e;
  cVar3 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar3;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  pbVar5 = (byte *)(param_1 + 0xb8);
  if (cVar3 == *(char *)((uint)*pbVar5 + DAT_080be4dc)) {
    uVar1 = *pbVar5 + 1;
    *pbVar5 = (byte)uVar1;
    if ((uint)*(byte *)(param_1 + 0x10) < (uVar1 & 0xff)) {
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080be4e0);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    }
    else {
      FUN_0801cf00(param_1,*(undefined2 *)((uint)*pbVar5 * 2 + DAT_080be52c));
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      FUN_08005760(param_1 + 0x74,(uint)*pbVar5 * 0x18 + DAT_080be530,param_1 + 0x54,1);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
  }
LAB_080be51e:
  FUN_0801cff0(param_1);
  return in_lr;
}


