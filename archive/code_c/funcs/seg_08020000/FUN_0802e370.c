// undefined FUN_0802e370(void)
// entry 0x802e370


undefined8 FUN_0802e370(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar1 = DAT_0802e40c;
  uVar6 = 0;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    do {
      uVar4 = (uint)*(byte *)(param_1 + 0x188 + uVar6);
      iVar5 = uVar4 * 0x18;
      iVar2 = iVar5 + DAT_0802e40c;
      if ((((*(ushort *)(iVar2 + 0x1d6) & 0xf) == 0xf) &&
          ((param_2 - *(int *)(iVar5 + DAT_0802e410)) + (uint)*(ushort *)(iVar2 + 0x1d8) <
           (uint)*(ushort *)(iVar2 + 0x1d8) << 1)) &&
         ((param_3 - *(int *)(iVar5 + DAT_0802e414)) + (uint)*(ushort *)(iVar2 + 0x1da) <
          (uint)*(ushort *)(iVar2 + 0x1da) << 1)) {
        if ((*(ushort *)(iVar2 + 0x1d6) & 0x20) == 0) {
          *(int *)(param_1 + 0x1c4) = *(int *)(iVar5 + DAT_0802e410);
        }
        else {
          *(int *)(param_1 + 0x1c4) = param_2;
        }
        iVar2 = uVar4 * 0x18;
        *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(iVar2 + DAT_0802e44c);
        *(undefined1 *)(param_1 + 0x1cc) = 1;
        *(char *)(param_1 + 0x1cd) = (char)*(undefined2 *)(iVar2 + iVar1 + 0x1d4);
        uVar3 = 0xf;
        goto LAB_0802e464;
      }
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < *(byte *)(param_1 + 0x1b8));
  }
  uVar3 = 0;
LAB_0802e464:
  return CONCAT44(in_lr,uVar3);
}


