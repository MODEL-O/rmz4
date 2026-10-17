// undefined FUN_08104dd8(void)
// entry 0x8104dd8


undefined4 FUN_08104dd8(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  iVar4 = DAT_08104e38;
  if (*(int *)(*(int *)(param_1 + 0x28) + DAT_08104e38 + 0x14) == 0) {
    *(undefined1 *)(param_1 + 0xb4) = 0;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08104e3c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      if (*(int *)(iVar3 + iVar4 + 0x28) == 0) {
        if ((int)(*(int *)(iVar3 + DAT_08104e90 + 4) +
                 ((uint)*(byte *)(param_1 + 0x11) * 0x10 + 8) * 0x100) < *(int *)(param_1 + 0x58)) {
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_08104e94;
        }
        iVar4 = *(int *)(param_1 + 0x2c);
        if (iVar4 == 0) {
          if (*(byte *)(param_1 + 0x11) < 2) {
            iVar5 = *(int *)(param_1 + 0xb8);
            iVar4 = iVar5 - *(int *)(param_1 + 0x58);
            if (iVar4 < 0) {
              iVar4 = *(int *)(param_1 + 0x58) - iVar5;
            }
            if (0x1000 < iVar4) {
              local_1c = *(undefined4 *)(param_1 + 0x54);
              local_18 = *(int *)(param_1 + 0xb8);
              uVar2 = FUN_08104c9c(&local_1c,
                                   (uint)*(byte *)(param_1 + 0x10) << 8 |
                                   *(byte *)(param_1 + 0x11) + 1,iVar3);
              *(undefined4 *)(param_1 + 0x2c) = uVar2;
            }
          }
        }
        else if (1 < *(byte *)(iVar4 + 0xc)) {
          *(undefined1 *)(iVar4 + 0xb4) = 0;
          iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 0x2c);
          if (iVar4 != 0) {
            *(int *)(param_1 + 0x2c) = iVar4;
            *(char *)(iVar4 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
            *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xb5) = 1;
          }
        }
      }
      FUN_08105084(param_1);
      FUN_0801cff0(param_1);
    }
    else {
      piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08104e3c);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
      *(undefined1 *)(param_1 + 0xe) = 0;
      FUN_08104ef8(param_1);
    }
  }
  return in_lr;
}


