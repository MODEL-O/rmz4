// undefined FUN_0803c590(void)
// entry 0x803c590


undefined4 FUN_0803c590(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803c62c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x10) * 2 + DAT_0803c630));
  iVar8 = **(int **)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0803c634);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,iVar8,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  psVar6 = (short *)((uint)*(byte *)(param_1 + 0x10) * 2 + DAT_0803c638);
  if (*psVar6 != 0) {
    if (*(byte *)(param_1 + 0x10) == 0xd) {
      if (*(char *)(iVar4 + 0x146) == '\0') {
        FUN_08002b10(*psVar6);
      }
      else {
        FUN_08002b10(0x11);
      }
    }
    else {
      FUN_08002b10(*psVar6);
    }
  }
  if (*(char *)(param_1 + 0x10) == '\r') {
    iVar7 = *(int *)(param_1 + 0xb4);
    if (*(char *)(iVar7 + 0x146) == '\0') {
      FUN_0804b9a4(iVar7,param_1,0,0);
    }
    else {
      FUN_0804adb4(iVar7,param_1,0);
    }
  }
  cVar2 = *(char *)(param_1 + 0x10);
  if (cVar2 == '\x13') {
    uVar1 = 1;
  }
  else if ((cVar2 == '\x11') || (cVar2 == '\x0f')) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0xc0) = uVar1;
  *(undefined1 *)(param_1 + 0xc1) = *(undefined1 *)((uint)*(byte *)(param_1 + 0x10) + DAT_0803c6f8);
  cVar2 = FUN_08038a78(iVar4);
  if (cVar2 != '\0') {
    *(char *)(param_1 + 0xc1) = *(char *)(param_1 + 0xc1) << 1;
  }
  cVar2 = FUN_0803a4e8(iVar4);
  cVar2 = cVar2 + *(char *)(param_1 + 0xc1);
  *(char *)(param_1 + 0xc1) = cVar2;
  if ((*(char *)(param_1 + 0x10) == '\f') && (*(char *)(iVar4 + 0xf5) == '\x04')) {
    *(char *)(param_1 + 0xc1) = cVar2 + '\x03';
  }
  cVar2 = *(char *)(iVar4 + 0xc5);
  if (((cVar2 == '\f') || (cVar2 == '\x10')) &&
     (*(char *)((uint)*(byte *)(param_1 + 0x10) + DAT_0803c6fc) != '\0')) {
    if (cVar2 == '\f') {
      bVar3 = *(byte *)(iVar8 + 6) | 0x40;
    }
    else {
      bVar3 = *(byte *)(iVar8 + 6) | 4;
    }
  }
  else {
    bVar3 = *(byte *)(iVar8 + 6);
  }
  *(byte *)(param_1 + 0xc2) = bVar3;
  FUN_08005794(param_1 + 0x74,iVar8,*(undefined1 *)(param_1 + 0xc1),*(undefined1 *)(param_1 + 0xc0),
               *(undefined1 *)(param_1 + 0xc2),0xffffffff);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0xc3) = 1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0803c744;
  FUN_0803c748(param_1);
  return in_lr;
}


