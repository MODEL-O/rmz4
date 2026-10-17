// undefined FUN_0803cd84(void)
// entry 0x803cd84


undefined4 FUN_0803cd84(int param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  iVar7 = *(int *)(param_1 + 0xb4);
  if (*(char *)(iVar7 + 0xd) == '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(char *)(param_1 + 0xf) == '\0') {
        iVar6 = 0x18;
        iVar5 = 0x1800;
        do {
          if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
            local_24 = *(int *)(param_1 + 0x54) - iVar5;
          }
          else {
            local_24 = *(int *)(param_1 + 0x54) + iVar5;
          }
          local_20 = *(int *)(param_1 + 0x58) + DAT_0803ce80;
          sVar1 = FUN_0804b980(local_24);
          if (sVar1 != 0) {
            FUN_0804b3f8(iVar7,&local_24,0,0);
            FUN_0804b3f8(iVar7,&local_24,0,1);
            *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
            break;
          }
          iVar5 = iVar5 + 0x600;
          iVar6 = iVar6 + 6;
        } while (iVar6 < 0x3d);
      }
      if (CONCAT11(*(undefined1 *)(iVar7 + 0x1e),*(undefined1 *)(iVar7 + 0x70)) != 0x1800) {
        if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == 0x6900) {
          FUN_0801cf00(param_1,0x6901);
        }
        else {
          FUN_0801cf00(param_1,DAT_0803cea4);
        }
        FUN_0801cff0(param_1);
        FUN_08005784(param_1 + 0x74,DAT_0803cea8);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        return in_lr;
      }
      FUN_0801cff0(param_1);
      bVar4 = *(byte *)(param_1 + 0x12) >> 2;
      if (2 < bVar4) {
        bVar4 = 2;
      }
      FUN_08005794(param_1 + 0x74,
                   **(undefined4 **)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0803cee0),
                   *(undefined1 *)(param_1 + 0xc1),*(undefined1 *)(param_1 + 0xc0),
                   *(undefined1 *)(param_1 + 0xc2),bVar4 + 1);
      return in_lr;
    }
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803cf14);
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar3 = *(undefined4 *)(*piVar2 + 8);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803cdd0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar3 = *(undefined4 *)(*piVar2 + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return in_lr;
}


