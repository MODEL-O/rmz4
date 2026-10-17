// undefined FUN_080b81dc(void)
// entry 0x80b81dc


undefined4 FUN_080b81dc(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    local_14 = *(int *)(param_1 + 0x54) + 0x1500;
    local_10 = *(undefined4 *)(param_1 + 0x58);
    FUN_080e41b8(&local_14,3,0);
    FUN_080e41b8(&local_14,3,0);
    FUN_080e41b8(&local_14,3,0);
    FUN_080e41b8(&local_14,3,0);
    FUN_080e41b8(&local_14,3,0);
    FUN_080e41b8(&local_14,3,0);
    iVar3 = DAT_080b8280;
    *(int *)(param_1 + 0x5c) = DAT_080b8280;
    *(int *)(param_1 + 100) = iVar3 + 0xc0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_08002b10(DAT_080b8284);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0xf);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar3;
    if (iVar3 < DAT_080b8288) {
      *(int *)(param_1 + 0x5c) = DAT_080b8288;
    }
    uVar2 = FUN_0801fb14(DAT_080b828c,param_1 + 0x54);
    if (uVar2 < 0x8001) goto LAB_080b83c8;
    *(undefined4 *)(param_1 + 0x5c) = 0x400;
  }
  else {
    if (cVar1 == '\x01') {
      iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar3;
      if (iVar3 <= *(int *)(*(int *)(param_1 + 0x28) + 0xb4) + DAT_080b8310) goto LAB_080b83c8;
      local_14 = iVar3 + 0x1500;
      local_10 = *(undefined4 *)(param_1 + 0x58);
      FUN_080e41b8(&local_14,3,0);
      FUN_080e41b8(&local_14,3,0);
      FUN_080e41b8(&local_14,3,0);
      FUN_080e41b8(&local_14,3,0);
      FUN_080e41b8(&local_14,3,0);
      FUN_080e41b8(&local_14,3,0);
      FUN_0801cf00(param_1,DAT_080b8314);
      *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0xb4) + DAT_080b8310;
      iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0xb8);
      iVar4 = 0x3700;
    }
    else {
      if (cVar1 != '\x02') {
        *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0xb4) + 0x800;
        *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0xb8) + 0x3000;
        if (*(char *)(param_1 + 0x73) == '\x03') {
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
          *(undefined1 *)(param_1 + 0xe) = 0;
        }
        goto LAB_080b83c8;
      }
      *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0xb4) + DAT_080b8390;
      *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0xb8) + 0x3700;
      if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_080b83c8;
      FUN_0801cd28(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
      FUN_0801ceec(param_1);
      FUN_0801cf00(param_1,DAT_080b8394);
      FUN_08005784(param_1 + 0x74,DAT_080b8398);
      *(undefined1 *)(param_1 + 0x24) = 0xd9;
      *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0xb4) + 0x800;
      iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0xb8);
      iVar4 = 0x3000;
    }
    *(int *)(param_1 + 0x58) = iVar3 + iVar4;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_080b83c8:
  FUN_0801cff0(param_1);
  return in_lr;
}


