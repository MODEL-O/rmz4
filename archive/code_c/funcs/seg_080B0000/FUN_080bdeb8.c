// undefined FUN_080bdeb8(void)
// entry 0x80bdeb8


undefined4 FUN_080bdeb8(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  cVar1 = *(char *)(param_1 + 0x11);
  FUN_0801cff0(param_1);
  iVar4 = *(int *)(param_1 + 0xb4);
  if (iVar4 < 1) {
    iVar4 = *(int *)(param_1 + 0x54);
    iVar7 = *(int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x58);
    iVar6 = *(int *)(param_1 + 0x60);
    sVar2 = FUN_08007c7c();
    if (sVar2 == 0) {
      *(int *)(param_1 + 0x54) = iVar4 + iVar7;
      *(int *)(param_1 + 0x58) = iVar5 + iVar6;
    }
    else {
      FUN_080bd9a8(param_1 + 0x54,0,cVar1 + 'Q');
      FUN_080bd9a8(param_1 + 0x54,1,cVar1 + -0x51);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bdf78);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
    }
  }
  else if (*(byte *)(iVar7 + 0xc) < 2) {
    *(int *)(param_1 + 0xb4) = iVar4 + -1;
  }
  else {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bdef8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080bdf8c(param_1);
  }
  return in_lr;
}


