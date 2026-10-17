// undefined FUN_0809d024(void)
// entry 0x809d024


undefined4 FUN_0809d024(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809d064);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_0801cf00(param_1,DAT_0809d088);
  }
  else {
    FUN_0801cf00(param_1,DAT_0809d068);
  }
  bVar1 = *(byte *)(iVar7 + 10) >> 4;
  bVar5 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar5;
  pbVar6 = (byte *)(param_1 + 0x4a);
  *pbVar6 = *pbVar6 & 0xef | bVar5 << 4;
  bVar1 = *(byte *)(iVar7 + 10) >> 5;
  bVar5 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4d) = bVar5;
  *pbVar6 = *pbVar6 & 0xdf | bVar5 << 5;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(iVar7 + 0x1c);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    cVar4 = *(char *)(param_1 + 0x11);
    if (cVar4 != '\0') {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff80;
      uVar3 = 2;
      goto LAB_0809d122;
    }
  }
  else {
    cVar4 = *(char *)(param_1 + 0x11);
    if (cVar4 == '\0') {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff80;
      uVar3 = 2;
      goto LAB_0809d122;
    }
  }
  *(undefined4 *)(param_1 + 0x5c) = 0x80;
  uVar3 = 0xfffffffe;
LAB_0809d122:
  *(undefined4 *)(param_1 + 100) = uVar3;
  if (cVar4 == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0x40;
    uVar3 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return in_lr;
}


