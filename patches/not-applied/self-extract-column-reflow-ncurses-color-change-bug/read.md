* Extracted at 2022-09-22 from the bakeby's st-flexipatch repository and from
  the original files. I directly got the code from the preprocessor definitions
  one by one. Additionally, they are altered a bit to clean the code up. The
  original version is in the extraction folder.
* Note that, now there is a patchon the suckless.org that provides the same
  behavior this patch provides.

* This patch introduces a history buffer, this enables user to scroll in the
  terminal window. Secondly, the patch disallows the cut and the removal the
  text when terminal shrinked down.
* This patch is meaty, if it is suggested to apply this before other
  modifications.
* Ref. github.com/ashish-yadav11 & github.com/BeyondMagic & github.com/bakkeby
