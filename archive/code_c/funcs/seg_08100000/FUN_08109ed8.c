// undefined FUN_08109ed8(void)
// entry 0x8109ed8


undefined4 FUN_08109ed8(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  iVar5 = *(int *)(param_1 + 0xb8);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  FUN_0801cf00(param_1,1);
  *(byte *)(param_1 + 0x4c) = *(byte *)(iVar5 + 10) >> 4 & 1;
  bVar2 = *(byte *)(iVar5 + 10) >> 4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (bVar2 & 1) << 4;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(iVar3 + 0xf5);
  if (cVar1 == '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar4 = DAT_08109f78;
  }
  else if (cVar1 == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar4 = DAT_08109f90;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar4 = DAT_08109fcc;
  }
  FUN_08005760(param_1 + 0x74,uVar4,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar4 = *(undefined4 *)(iVar5 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  FUN_08002b10(0x27);
  return in_lr;
}


