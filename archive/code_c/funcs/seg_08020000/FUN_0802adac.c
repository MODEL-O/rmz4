// undefined FUN_0802adac(void)
// entry 0x802adac


undefined8 FUN_0802adac(uint param_1,int param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 in_lr;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint uVar4;
  
  param_1 = param_1 & 0xff;
  local_28 = 0;
  local_58 = *param_3;
  local_54 = param_3[1];
  local_24 = 0;
  bVar1 = *(byte *)(param_2 + 0x97) & 0xf0;
  if (bVar1 == 0x10) {
    local_24 = 1;
  }
  else if (bVar1 == 0x20) {
    local_24 = 2;
  }
  else if (bVar1 == 0x30) {
    local_24 = 3;
  }
  else if ((*(byte *)(param_2 + 0x97) & 0xf) == 6) {
    local_24 = 4;
  }
  if (local_24 == 4) {
    if (6 < param_1) goto LAB_0802b3d4;
  }
  else if (*(char *)(local_24 + param_1 * 4 + DAT_0802ae4c) == '\0') goto LAB_0802b3d4;
  uVar7 = 0xff;
  if (local_24 == 2) {
    iVar2 = 0;
    piVar5 = DAT_0802ae50;
    do {
      piVar5 = piVar5 + 1;
      if (*piVar5 == param_2) goto LAB_0802b3d4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xc);
    uVar4 = 0;
    if (DAT_0802ae50[1] == 0) {
      DAT_0802ae50[1] = param_2;
      uVar7 = 0;
    }
    else {
      do {
        uVar3 = uVar4 + 1;
        if (0xb < (int)uVar3) goto LAB_0802ae6e;
        iVar2 = uVar4 + 2;
        uVar4 = uVar3;
      } while (DAT_0802ae50[iVar2] != 0);
      DAT_0802ae50[iVar2] = param_2;
      uVar7 = uVar3 & 0xff;
    }
LAB_0802ae6e:
    if (uVar7 == 0xff) goto LAB_0802b3d4;
  }
  iVar2 = DAT_0802b2b8;
  uVar6 = 0x5a;
  if (param_1 == 0x18) {
    uVar6 = 0x1e;
    param_1 = 1;
  }
  if (param_1 == 0x14) {
    uVar6 = 0x1e;
    param_1 = 2;
  }
  if (param_1 < 7) {
    if (local_24 == 1) {
      local_28 = FUN_080d3330(param_2,&local_58,uVar6);
    }
    else if (local_24 == 2) {
      local_58 = local_58 + 0x600;
      local_54 = local_54 + DAT_0802af24;
      local_28 = FUN_080d3518(param_2,&local_58,uVar6,uVar7);
      local_58 = local_58 + DAT_0802af28;
      local_54 = local_54 + 0x600;
      FUN_080d357c(param_2,&local_58,uVar6);
      local_58 = local_58 + 0x1000;
      local_54 = local_54 + 0x800;
      FUN_080d357c(param_2,&local_58,uVar6);
      local_58 = local_58 + DAT_0802af2c;
      local_54 = local_54 + 0x200;
      FUN_080d357c(param_2,&local_58,uVar6);
    }
    else if (local_24 == 3) {
      local_58 = local_58 + 0x600;
      local_54 = local_54 + DAT_0802afa8;
      local_28 = FUN_080d380c(param_2,&local_58,uVar6);
      local_58 = local_58 + DAT_0802afac;
      local_54 = local_54 + 0x600;
      FUN_080d380c(param_2,&local_58,uVar6);
      local_58 = local_58 + 0x1000;
      local_54 = local_54 + 0x800;
      FUN_080d380c(param_2,&local_58,uVar6);
      local_58 = local_58 + DAT_0802afb0;
      local_54 = local_54 + 0x200;
      FUN_080d380c(param_2,&local_58,uVar6);
    }
    else if (local_24 == 4) {
      local_28 = FUN_080e5b30(param_2,&local_58,uVar6);
    }
  }
  else if (local_24 == 1) {
    iVar2 = 6;
    piVar5 = DAT_0802b000;
    do {
      local_50 = local_58 + *piVar5;
      local_4c = local_54 + piVar5[1];
      if (local_28 == 0) {
        local_28 = FUN_080d3330(param_2,&local_50,0x1e);
      }
      else {
        FUN_080d3330(param_2,&local_50,0x1e);
      }
      piVar5 = piVar5 + 2;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  else if (local_24 == 2) {
    if (param_1 == 0xe) {
      local_48 = local_58 + 0x600;
      local_44 = local_54 + DAT_0802b110;
      local_28 = FUN_080d3518(param_2,&local_48,0x1e,uVar7);
      iVar2 = DAT_0802b118;
      local_48 = local_58 + DAT_0802b114;
      local_44 = local_54 + DAT_0802b118;
      FUN_080d3518(param_2,&local_48,0x1e,uVar7);
      local_48 = local_58 + iVar2;
      local_44 = local_54 + DAT_0802b11c;
      FUN_080d3518(param_2,&local_48,0x1e,uVar7);
      iVar2 = DAT_0802b120;
      local_48 = local_58 + DAT_0802b120;
      local_44 = local_54 + DAT_0802b124;
      FUN_080d3518(param_2,&local_48,0x1e,uVar7);
      local_48 = local_58 + 0xc00;
      local_44 = local_54 + DAT_0802b124;
      FUN_080d3518(param_2,&local_48,0x1e,uVar7);
      local_48 = local_58 + 0xe00;
      local_44 = local_54 + 0x800;
      FUN_080d3518(param_2,&local_48,0x1e,uVar7);
      local_48 = local_58 + DAT_0802b124;
      local_44 = local_54 + 0xa00;
      FUN_080d3518(param_2,&local_48,0x1e,uVar7);
      local_48 = local_58 + iVar2;
      local_44 = local_54;
      FUN_080d3518(param_2,&local_48,0x1e,uVar7);
    }
    else {
      iVar2 = 3;
      piVar5 = DAT_0802b16c;
      do {
        local_40 = local_58 + *piVar5 + 0x600;
        local_3c = local_54 + piVar5[1] + DAT_0802b170;
        if (local_28 == 0) {
          local_28 = FUN_080d3518(param_2,&local_40,0x1e,uVar7);
        }
        else {
          FUN_080d357c(param_2,&local_40,0x1e);
        }
        local_40 = local_40 + DAT_0802b1e0;
        local_3c = local_3c + 0x600;
        FUN_080d357c(param_2,&local_40,0x1e);
        local_40 = local_40 + 0x1000;
        local_3c = local_3c + 0x800;
        FUN_080d357c(param_2,&local_40,0x1e);
        local_40 = local_40 + DAT_0802b1e4;
        local_3c = local_3c + 0x200;
        FUN_080d357c(param_2,&local_40,0x1e);
        piVar5 = piVar5 + 2;
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
  }
  else if (local_24 == 3) {
    if (((param_1 == 0x11) && (0x1c < *(byte *)(param_2 + 0xd))) &&
       (*(byte *)(param_2 + 0xd) < 0x20)) {
      local_34 = local_54 + DAT_0802b2b8;
      local_38 = local_58;
      local_28 = FUN_080d380c(param_2,&local_38,0x1e);
      local_38 = local_58 + iVar2;
      local_34 = local_54 + DAT_0802b2bc;
      FUN_080d380c(param_2,&local_38,0x1e);
      local_38 = local_58 + 0xe00;
      local_34 = local_54;
      FUN_080d380c(param_2,&local_38,0x1e);
      local_38 = local_58 + 0x400;
      local_34 = local_54 + 0x1000;
      FUN_080d380c(param_2,&local_38,0x1e);
      local_38 = local_58 + DAT_0802b2c0;
      local_34 = local_54 + 0xe00;
      FUN_080d380c(param_2,&local_38,0x1e);
      local_38 = local_58 + 0xc00;
      local_34 = local_54 + DAT_0802b2c4;
      FUN_080d380c(param_2,&local_38,0x1e);
      local_38 = local_58 + 0x200;
      local_34 = local_54 + 0x200;
      FUN_080d380c(param_2,&local_38,0x1e);
    }
    else {
      iVar2 = 3;
      piVar5 = DAT_0802b308;
      do {
        local_30 = local_58 + *piVar5 + 0x600;
        local_2c = local_54 + piVar5[1] + DAT_0802b30c;
        if (local_28 == 0) {
          local_28 = FUN_080d380c(param_2,&local_30,0x1e);
        }
        else {
          FUN_080d380c(param_2,&local_30,0x1e);
        }
        local_30 = local_30 + DAT_0802b3a4;
        local_2c = local_2c + 0x600;
        FUN_080d380c(param_2,&local_30,0x1e);
        local_30 = local_30 + 0x1000;
        local_2c = local_2c + 0x800;
        FUN_080d380c(param_2,&local_30,0x1e);
        local_30 = local_30 + DAT_0802b3a8;
        local_2c = local_2c + 0x200;
        FUN_080d380c(param_2,&local_30,0x1e);
        piVar5 = piVar5 + 2;
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
  }
  if (local_28 != 0) {
    if (local_24 == 1) {
      FUN_08002b10(0x3c);
      *(char *)(param_2 + 0x94) = *(char *)(param_2 + 0x94) + '\x1e';
    }
    if (local_24 == 2) {
      FUN_08002b10(0x3d);
      local_28 = 0;
    }
    else {
      if (local_24 == 3) {
        FUN_08002b10(0x40);
        *(char *)(param_2 + 0x94) = *(char *)(param_2 + 0x94) + '\x1e';
      }
      if (local_24 == 4) {
        *(char *)(param_2 + 0x94) = *(char *)(param_2 + 0x94) + '\x1e';
      }
    }
  }
LAB_0802b3d4:
  return CONCAT44(in_lr,local_28);
}


