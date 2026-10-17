// undefined FUN_08031884(void)
// entry 0x8031884


undefined4 FUN_08031884(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = DAT_080318e4;
  FUN_0802b7f0(param_1,(uint)*(byte *)(param_1 + 0x174) * 8 + DAT_080318e4,0);
  FUN_0802b7f0(param_1,(uint)*(byte *)(param_1 + 0x174) * 8 + iVar3,1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar4 = FUN_0803851c(param_1);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)sVar4;
  bVar2 = false;
  bVar1 = *(byte *)(param_1 + 0x14c);
  if (bVar1 < 8) {
    *(byte *)(param_1 + 0x14c) = bVar1 + 1;
  }
  else {
    if (*(char *)(param_1 + 0xc0) == '\x01') {
      uVar5 = *(uint *)(param_1 + 600);
      uVar6 = 0x2000;
    }
    else {
      uVar5 = *(uint *)(param_1 + 600);
      uVar6 = 0x8000;
    }
    if ((uVar5 & uVar6) == 0) {
      bVar2 = true;
    }
  }
  sVar4 = FUN_0802bfe8(param_1,(uint)*(byte *)(param_1 + 0x174) * 8 + DAT_08031954,0);
  if (((0 < *(int *)(param_1 + 0x60)) || (sVar4 != 0)) || (bVar2)) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
    sVar4 = FUN_080386d4(param_1);
    *(int *)(param_1 + 0x5c) = (int)sVar4;
  }
  return in_lr;
}


