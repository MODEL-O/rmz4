// undefined FUN_0801c924(void)
// entry 0x801c924


undefined4 FUN_0801c924(int param_1,undefined4 param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  FUN_080054b4();
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  *(int *)(param_1 + 0xc) = iVar3;
  if (iVar3 != param_1 + 0x14) {
    do {
      pbVar2 = DAT_0801c9a0;
      if ((*(byte *)(iVar3 + 10) & 1) != 0) {
        iVar4 = iVar3 + 0x34;
        if ((*(byte *)(iVar3 + 10) & 0x40) != 0) {
          *(byte *)(iVar3 + 0x47) = *(byte *)(iVar3 + 0x47) & 0xc1 | (*DAT_0801c9a0 & 0x1f) << 1;
          bVar1 = *pbVar2;
          if (bVar1 < 0x1f) {
            *pbVar2 = bVar1 + 1;
          }
          if ((*(byte *)(iVar3 + 0xb) & 1) == 0) {
            FUN_0800053c(iVar4,*(undefined1 *)(iVar3 + 0x24));
          }
          else if ((*(byte *)(iVar3 + 0xb) & 2) == 0) {
            FUN_08000590(iVar4,*(undefined1 *)(iVar3 + 0x24));
          }
          else {
            FUN_08000590(iVar4,*(undefined1 *)(iVar3 + 0x24));
          }
        }
        if ((*(byte *)(iVar3 + 10) & 8) == 0) {
          FUN_080033fc(param_2,iVar4,0,*(undefined1 *)(iVar3 + 0x25));
        }
        else {
          FUN_080033fc(param_2,iVar4,(*(byte *)(iVar3 + 0x49) & 0xf) >> 2,
                       *(undefined1 *)(iVar3 + 0x25));
        }
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 4);
      *(int *)(param_1 + 0xc) = iVar3;
    } while (iVar3 != param_1 + 0x14);
  }
  return in_lr;
}


