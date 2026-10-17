// undefined FUN_08115dd8(void)
// entry 0x8115dd8


undefined4 FUN_08115dd8(int param_1)

{
  int iVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (0x17 < *(byte *)(param_1 + 3)) {
    if ((*(short *)(DAT_08115ea8 + 2) == 0) || (*(short *)(DAT_08115ea8 + 2) == 4)) {
      *(undefined1 *)(param_1 + 3) = 0;
      FUN_0810e584(1);
      *(undefined2 *)(param_1 + 10) = 0;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
      if (((*(short *)(DAT_08115ea8 + 2) == 0) || (*(short *)(DAT_08115ea8 + 2) == 4)) &&
         (sVar3 = FUN_08117a68(param_1), iVar1 = DAT_08115ed8, sVar3 != 0)) {
        if (sVar3 == 1) {
          *(undefined1 *)(param_1 + 3) = 0x12;
          *(undefined1 *)(param_1 + DAT_08115eac + 0xc) = 0;
        }
        else {
          if (sVar3 == -1) {
            if ((*(byte *)(DAT_08115ed8 + 4) & 0x80) == 0) {
              FUN_0810e5f0(0x200);
              *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) | 0x80;
            }
            else {
              FUN_0810e5f0(DAT_08115ee4);
            }
            cVar2 = -1;
          }
          else {
            cVar2 = *(char *)(param_1 + 3) + '\x01';
          }
          *(char *)(param_1 + 3) = cVar2;
        }
      }
    }
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08115dea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(PTR_PTR_08115dec + (uint)*(byte *)(param_1 + 3) * 4))();
  return uVar4;
}


