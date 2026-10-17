// undefined FUN_080e71e0(void)
// entry 0x80e71e0


undefined4 FUN_080e71e0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(byte *)(param_1 + 0x10) < 2) {
    local_14 = *(int *)(param_1 + 0x58) + DAT_080e7228;
    if (*(char *)(param_1 + 0x11) == '\0') {
      local_18 = *(int *)(param_1 + 0x54);
      FUN_080d0c88(1,&local_18);
      FUN_08002b10(0x2a);
      FUN_080e70d4(param_1 + 0x54,DAT_080e722c,*(byte *)(param_1 + 10) >> 4 & 1);
      uVar2 = 0x204;
    }
    else {
      local_18 = *(int *)(param_1 + 0x54) +
                 *(int *)(((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4U) + DAT_080e7284) *
                 0x100;
      *(int *)(param_1 + 0x54) = local_18;
      FUN_080d0c88(1,&local_18);
      FUN_08002b10(0x2a);
      FUN_080e70d4(param_1 + 0x54,DAT_080e7288,*(byte *)(param_1 + 10) >> 4 & 1);
      uVar2 = DAT_080e728c;
    }
    FUN_080e70d4(param_1 + 0x54,uVar2,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  else if (*(short *)(param_1 + 0x10) == 4) {
    iVar3 = param_1 + 0x54;
    FUN_080cf20c(iVar3,0,0);
    FUN_080cf20c(iVar3,0,1);
    FUN_080cf20c(iVar3,0,2);
    FUN_080cf20c(iVar3,0,3);
    FUN_080e70d4(iVar3,DAT_080e7334,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e70d4(iVar3,DAT_080e7338,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e70d4(iVar3,DAT_080e733c,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e70d4(iVar3,DAT_080e7340,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e70d4(iVar3,DAT_080e7344,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e70d4(iVar3,DAT_080e7348,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e734c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


